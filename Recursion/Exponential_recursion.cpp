#include <iostream>
using namespace std;
int exponential_expansion(int a,int b){
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans = exponential_expansion(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a * ans * ans;
    }
    
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << exponential_expansion(a,b);

    return 0;
}