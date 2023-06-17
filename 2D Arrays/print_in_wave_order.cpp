#include <iostream>
#include <vector>
using namespace std;
vector<int> printWaveorder(int arr[][3],int m,int n)
{
    vector <int> ans ;
    for(int col = 0;col<n;col++){
        if((col%2)==0 ){
            //even column need to go up to down
            for(int row = 0;row<m;row++){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //odd column need to go bottom to up
            for(int row = m-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector <int> result = printWaveorder(arr,3,3);
    for(int i:result){
        cout << i <<" ";
    }
    return 0;
}