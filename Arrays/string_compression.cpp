#include <iostream>
#include <vector>
using namespace std;
int compress(vector <char> chars){
    int i = 0;
    int ansindex = 0;
    int n = chars.size();
    while(i<n){
        int j = i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ansindex++] = chars[i];
        int count = j-i;
        if(count >1){
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansindex++] = ch;
            }
        }
        i=j; // represent the new different value if present
    }
    return ansindex;
}
void displayVector(vector <char> v){
    for(int i =0;i<v.size();i++){
        cout << v[i]<<",";
    }
}
int main(){
    vector <char> v;
    v.push_back('a');
    v.push_back('a');
    v.push_back('b');
    v.push_back('b');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    v.push_back('d');
    cout << "The length of the compressed vector is " <<compress(v);
    return 0;
}