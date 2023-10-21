#include <iostream>
using namespace std;
int duplicates(int *arr){
    int ans = 0;
    //Xoring all the elements
    for(int i =0;i<6;i++){
        ans = ans^arr[i];
    }
    //Xor elements from 1 to n-1
    for(int i = 1;i<6;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[6]={1,2,4,5,6,4};
    cout << duplicates(arr);
    return 0;
}

//alternative and better

    //remember the array element values should be less than n(size of array)
    //and atleast one element should be repeated.

    //basically we are manipulating or changing the elements value by adding n to it 
    //if there are same elements they will be definitely pointing to the same index
    //by this formula a[a[i%n]] and on adding n 
    //there will be a time when that n will be added twice to that array index element
    //and we check for that and hence that will be the duplicate element.
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        for(int i = 0;i<n;i++){
            a[a[i]%n]+=n;
        }
        for(int i = 0;i<n;i++){
            if(a[i]>=n*2){
                return i;
            }
        }
        return -1;
    }
