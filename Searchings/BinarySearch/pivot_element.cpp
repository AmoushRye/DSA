#include <iostream>
using namespace std;
int findpivot(int arr[],int n){
    int low=0,high = n-1;
    int mid;
    while (high>low){
        mid = (low+high)/2;
        if(arr[mid]>=arr[0]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}
int main(){
    int arr[5]= {30,40,10,20};
    cout<<arr[findpivot(arr,4)];
    return 0;
}