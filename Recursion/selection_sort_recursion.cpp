#include <iostream>
using namespace std;
//naive method
// void selectionsort(int *arr,int n){
//     int minindex;
//     for(int i =0;i<n-1;i++){
//         minindex = i;
//         for(int j =i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex = j;
//             }
//         }
//         swap(arr[i],arr[minindex]);
//     }
// }
void SelectionSort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    int minval = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[minval])
        {
            minval = i + 1;
        }
    }
    swap(arr[0], arr[minval]);
    SelectionSort(arr + 1, n - 1);
}
int main()
{
    int arr[10] = {75, 38, 9, -31, 3, 6, 0, 22, -1, 2};
    SelectionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}