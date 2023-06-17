#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> nums){
    int count = 0;
    for(int i =1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    return count<=1;
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    v.push_back(6);
    if(check(v)){
        cout << "Array is a rotated sorted array";
    }
    else{
        cout << "Array is not a rotated sorted array";
    }
    return 0;
}