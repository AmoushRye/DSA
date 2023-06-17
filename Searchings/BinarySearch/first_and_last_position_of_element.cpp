#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int mid, low = 0, high = n - 1;
    int ans = -1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key)
{
    int mid, low = 0, high = n - 1;
    int ans = -1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[10 ] = {0,0,0,1,2,2,2,2,2,2};
    cout << firstOccurence(arr,10,0);
    return 0;
}
