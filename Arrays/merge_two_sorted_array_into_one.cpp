#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
vector <int> merger(vector<int> v1, vector<int> v2)
{
    vector<int> v3;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            v3.push_back( v1[i++]);
        }
        else
        {
            v3.push_back( v2[j++]);
        }
    }
    while (i < v1.size())
    {
        v3.push_back( v1[i++]);
    }
    while (j < v2.size())
    {
        v3.push_back( v2[j++]);
    }
    return v3;
}

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    display(v1);
    display(v2);
    cout << "After merging the arrays:";
    vector <int> result = merger(v1,v2);
    display(result);
}