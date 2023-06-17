#include <iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void SortOne(int arr[],int n){
    int i = 0,j=n-1;
    while(i<j){
        //make sure that i<j as if it becomes greater the loop will end
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        //here condition is arr[i]=1 and arr[j]=0
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;    
        }
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    cout << "Before sorting the array:";
    printarray(arr,8);
    SortOne(arr,8);
    cout << endl;
    cout << "After sorting the array:";
    printarray(arr,8);
    return 0;
}