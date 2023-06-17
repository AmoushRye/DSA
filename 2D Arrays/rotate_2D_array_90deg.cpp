#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int matx[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int temp[4][4];
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            temp[j][(n-1)-i]=matx[i][j];
        }
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            cout << temp[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}