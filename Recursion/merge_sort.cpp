#include <iostream>
using namespace std;    
void merge(int *arr,int low,int mid, int high){
    int l1 = mid-low+1;
    int l2 = high-mid;
    int *tmp1 = new int[l1];
    int *tmp2 = new int[l2];
    for(int i =0;i<l1;i++){
        tmp1[i] = arr[low+i];
    }
    for(int j=0;j<l2;j++){
        tmp2[j] = arr[mid+j+1];
    }
    int index1 = 0;
    int index2 = 0;
    int k = low;
    while(index1<l1 && index2<l2){
        if(tmp1[index1]<=tmp2[index2]){
            arr[k] = tmp1[index1];
            index1++;
        }
        else{
            arr[k] = tmp2[index2];
            index2++;
        }
        k++;
    }
    while(index1<l1){
        arr[k] = tmp1[index1];
        index1++;
        k++;
    }
    while(index2<l2){
        arr[k] = tmp2[index2];
        index2++;
        k++;
    }
    delete []tmp1;
    delete []tmp2;
}
void mergesort(int *arr,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void display(int *arr,int n){
    for(int i =0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {41,5,3,89,1,-2};
    display(arr,6);
    mergesort(arr,0,6);
    display(arr,6);
    return 0;
}