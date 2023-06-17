#include <iostream>
using namespace std;
int duplicates(int *arr){
    int ans = 0;
    //Xoring all the elements
    for(int i =0;i<6;i++){
        ans = ans^arr[i];
    }
    //Xor elements from 1 to n-1
    for(int i = 1;i<6;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[6]={1,2,4,5,6,4};
    cout << duplicates(arr);
    return 0;
}