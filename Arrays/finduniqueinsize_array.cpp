#include <iostream>
using namespace std;
int uniqueelement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j) // checking because if i an j values are equal than it will obviously be the same element and thus we can't find unique element.
            {
                if (arr[i] == arr[j])
                {
                    // cout << arr[i] << " ";//Finds all repeated elements
                    count++;
                }
            }
        }
        if (count == 0)
        {
            return arr[i];
        }
    }
}
//Alternate and fast solution
// int uniqueelement(int *arr,int n){
//     int ans = 0;
//     for(int i =0;i<n;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
int main()
{
    int arr[7] = {2, 3, 6, 3, 6, 2, 1};
    int res = uniqueelement(arr, 7);
    cout << res;
    return 0;
}