#include <iostream>
#include <vector>
using namespace std;
bool search_element(vector<vector<int>> matx,int target){
    int row = matx.size();
    int col = matx[0].size();
    int row_index = 0;
    int col_index = col-1;
    while(row_index<row && col_index>=0){
        int element = matx[row_index][col_index];
        if(element == target){
            return 1;
        }
        else if(element>target){
            col_index--;
        }
        else{
            row_index++;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> matx;
    matx.push_back({1,4,7,11,14});
    matx.push_back({2,5,8,1,19});
    matx.push_back({3,6,9,16,22});
    matx.push_back({10,13,14,17,24});
    matx.push_back({18,21,23,26,30});
    cout << search_element(matx,17);
    return 0;
}