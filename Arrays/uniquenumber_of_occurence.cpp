//NOT DONE
#include <iostream>
using namespace std;
int eval(int evaluated[], int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            if (evaluated[a] == arr[i])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}
int main()
{
    int arr[6] = {1, 2, 2, 1, 1, 3};
    int count = 1;
    int temp_array[6];
    int evaluated[3];
    int k = 0, m = 0;
    for (int i = 0; i < 6; i++)
    {
        if (eval(evaluated, arr))
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (arr[i] == arr[j])
                {
                    count += 1;
                }
            }
        }
        evaluated[m] = arr[i];
        temp_array[k] = count;
        k++;
        count = 1;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << temp_array[i] << " ";
    }
    return 0;
}