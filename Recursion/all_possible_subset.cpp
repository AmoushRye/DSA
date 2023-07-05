#include <iostream>
#include <vector> 
using namespace std;
void solve(vector<int> num,vector<int> output,int index,vector<vector<int>>& ans){
    if(index>=num.size()){
        ans.push_back(output);
        return;
    }
    solve(num,output,index+1,ans);
    int element = num[index];
    output.push_back(element);
    solve(num,output,index+1,ans);
}
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(v,output,index,ans);
    for(const auto& m:ans){
        for(const auto& n:m){
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}