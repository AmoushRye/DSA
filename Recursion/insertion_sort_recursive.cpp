#include <iostream>
using namespace std;
//normal approach
// void insertion_sort(int *arr,int n){
//     int key,j;
//     for(int i =1;i<n;i++){
//         j = i-1;
//         key = arr[i];
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j=j-1;
//         }
//         arr[j+1] = key;
//     }
// }

//recursive approach
void insertion_sort(int *arr, int n) {
    if (n <= 1) {
        return;
    }
    insertion_sort(arr, n - 1);
    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

int main(){
    int arr[6] = {3,5,6,2,1,-1};
    insertion_sort(arr,6);
    for(int i =0;i<6;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}