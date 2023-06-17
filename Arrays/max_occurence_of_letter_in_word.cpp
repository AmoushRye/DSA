#include <iostream>
using namespace std;
char getMaxOccurence(string x){
    int arr[26] = {0};
    char ch;
    int number;
    //For lower characters only
    for(int i =0 ;i<x.length();i++){
        ch=x[i];
        number = ch-'a';
        arr[number]++;
    }
    int maxi =-1;
    int index = 0;
    for(int i = 0;i<26;i++){
        if(maxi<arr[i]){
            index = i;
            maxi = arr[i];
        }
    }
    return index+'a';
}
int main(){
    string x;
    cout << "Enter the string:";
    cin >> x;
    cout << getMaxOccurence(x);
    return 0;
}