#include <iostream>
using namespace std;
void bubbly_sort(int *arr,int n){
    if(n==1 || n==0){
        return;
    }
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbly_sort(arr,n-1);
}
int main(){
    int arr[10] = {7,38,9,1,3,6,0,22,-1,2};
    bubbly_sort(arr,10);
    for(int i=0;i<10;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}