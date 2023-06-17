#include <iostream>
using namespace std;
int PeakFinder(int arr[],int n){
    int low,high,mid;
    low =0;
    high=n-1;
    while(high>low){
        mid = (low+high)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }
        else{
            high=mid;
        }
    }
    return arr[low];
}
int main(){
    int arr[9]={10,12,23,24,29,40,113,200,300};
    cout<<PeakFinder(arr,9);
    return 0;
}