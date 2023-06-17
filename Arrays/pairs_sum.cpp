#include <iostream>
using namespace std;
void pairsum(int arr[], int length, int res)
{
    int flag;
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            for (int k = j + 1; k <= length-1; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == res)
                {
                    flag = 1;
                    cout << "(" << arr[i] << "," << arr[j] <<"," <<arr[k] << ")" << endl;
                }
            }
        }
    }
    if (flag!=1){
        cout << "no possible triplets";
    }
}
int main()
{
    int arr[6] = {1, 5, 2, 3, 4, 3};
    pairsum(arr, 6, 12);
    return 0;
}