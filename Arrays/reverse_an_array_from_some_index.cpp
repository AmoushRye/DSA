#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i = 0;i<v.size();i++){
        cout << v[i]<<" ";
    }
}
vector<int> reverser(vector<int> v,int m){
    int start = m+1,end = v.size()-1;
    while(end>=start){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "Before reversing the array:";
    display(v);
    cout << endl;
    int m;
    cout << "Enter the value of m:";
    cin >> m;
    cout << "After reversing the array from "<<m<<" position:";
    vector <int> result = reverser(v,m);
    display(result);
    return 0;
}