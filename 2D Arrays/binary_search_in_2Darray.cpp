#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = (row*col)-1;
    int mid = (start+end)/2;
    while(start<=end){
        int element =matrix[mid/col][mid%col]; 
        if(element==target){
            return 1;
        }
        if(element<target){
            start = mid+1;
        }
        if(element>target){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return 0;
}
int main(){
    vector<vector<int>> mat;
    mat.push_back({1,3,5,7});
    mat.push_back({10,11,16,20});
    mat.push_back({23,30,34,60});
    cout << searchMatrix(mat,5);
    return 0;
}