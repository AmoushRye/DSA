#include <iostream>
#include <vector>
using namespace std;
//Naive approach
// int main(){
//     int array1[6]={1,2,2,2,3,4};
//     int array2[4]={2,2,3,3};
//     int flag = 0;
//     //Comparing
//     for(int i = 0;i<6;i++){
//         for(int j =0;j<4;j++){
//             if(array1[i]==array2[j]){
//                 cout << array1[i];
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1){
//             break;
//         }
//     }
//     return 0;
// }

//Optimized code O(n)

// vector<int> findarrayintersection(vector<int> &arr1,vector<int> &arr2,int n,int m){
//     int i =0,j=0;
//     vector<int> ans;
//     while (i<n && j<m){
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }