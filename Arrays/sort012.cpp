#include <iostream>
using namespace std;
//Sorted using dutch national flag algorithm
void display(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
void sort012(int arr[], int size) {
    int low = 0;            // pointer for 0s
    int mid = 0;            // pointer for 1s
    int high = size - 1;    // pointer for 2s
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {  // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
        display(arr,size);
    }
}

int main() {
    int arr[] = {2,2,1, 2, 2, 1, 0, 1, 1, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
