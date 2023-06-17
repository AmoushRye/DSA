#include <iostream>
#include <vector>
//write a code to take all zeroes on the rhs
using namespace std;
vector <int> moveZeroes(vector <int> v){
    int nonzero =0 ;//indicates a non zero value
    for(int j = 0;j<v.size();j++){
        if(v[j]!=0){
            swap(v[j],v[nonzero]);
            nonzero++;
        }
    }
    return v;
}
void display(vector <int> v){
    for(int i = 0;i<v.size();i++){
        cout << v[i]<<" ";
    }
}
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
    vector <int> result = moveZeroes(v);
    display(result);
    return 0;
}