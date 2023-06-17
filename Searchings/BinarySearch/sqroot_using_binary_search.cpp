#include <iostream>
using namespace std;
long long integersqrt(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    while (s <= e)
    {
        long long int mid = (s + e) / 2;
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
double precisionPart(int n, int precision, int tempsol)
{
    double ans = tempsol;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n = 77;
    int tempsol = integersqrt(n);
    cout << precisionPart(n,6,tempsol);
    return 0;
}