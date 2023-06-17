#include <iostream>
#include <string.h>
using namespace std;
void reverser(string x)
{
    int i = 0, count = 0, end, start = 0;
    int len = x.length();
    x[len]=' ';
    while (x[i] != '\0')
    {
        if (x[i] == ' ')
        {
            end = i - 1;
            while (start < end)
            {
                swap(x[start++], x[end--]);
            }
            start = i+1;
        }
        i++;
    }
    cout << x;
}
int main()
{
    string x = "Hello I am amos and I am proud of this";
    reverser(x);
    return 0;
}