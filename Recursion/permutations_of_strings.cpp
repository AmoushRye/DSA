#include <iostream>
#include <vector>
using namespace std;
void solve(string v,vector<string>& ans,int index){
    if(index>=v.size()){
        ans.push_back(v);
        return ;
    }
    for(int j = index;j<v.size();j++){
        swap(v[index],v[j]);
        solve(v,ans,index+1);
        swap(v[index],v[j]);
    }
}
void permutation(string v){
    vector<string> ans;
    int index = 0;
    int count =0;
    solve(v,ans,index);
    for(const auto &str:ans){
        cout << str<<" ";
        count++;
    }cout <<endl;
    cout << count<<endl;
}
int main(){
    string v = "ab";
    permutation(v);
    return 0;
}