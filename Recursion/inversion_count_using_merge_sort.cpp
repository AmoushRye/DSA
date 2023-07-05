#include <iostream>
using namespace std;    
long long merge(int *arr,int low,int mid, int high){
    long long inv =0;
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
            inv+=l1-index1;
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
    return inv;
}
long long mergesort(int *arr,int low,int high){
    long long inv =0;
    if(low<high){
        int mid = (low+high)/2;
        inv+=mergesort(arr,low,mid);
        inv+=mergesort(arr,mid+1,high);
        inv+=merge(arr,low,mid,high);
    }
    return inv;
}
void display(int *arr,int n){
    for(int i =0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int arr[4] = {8,4,2,1};
    display(arr,4);
    cout << "number of inversions:";
    cout << mergesort(arr,0,4);
    cout <<endl;
    cout << "sorted array"<<endl;
    display(arr,4);
    return 0;
}