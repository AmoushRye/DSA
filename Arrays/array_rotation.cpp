#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> temp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}
void rotateArray(vector<int> v, int k)
{
    vector<int> temp(v.size());
    int n = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        temp[(i + k) % n] = v[i];
    }
    display(temp,n);
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int k = 3;
    display(v,v.size());
    cout << endl;
    rotateArray(v, k);
    return 0;
}