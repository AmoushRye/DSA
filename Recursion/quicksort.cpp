#include <iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot = arr[s];
    int cnt =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i =s,j =e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr,int s,int e){
    if(s>=e)
        return;
    int p = partition(arr,s,e);
    //sorting left part
    quickSort(arr,s,p-1);
    //Sorting right part
    quickSort(arr,p+1,e);
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
int main(){
    int arr[10] = {10,99,-88,5432,4,1,6,9,-300,2};
    int n = 10;
    quickSort(arr,0,n-1);
    display(arr,n);
    return 0;
}