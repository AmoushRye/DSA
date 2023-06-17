#include <iostream>
using namespace std;
void displayarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void swaparray(int arr[],int n){
    for(int i = 0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int odd[5]={11,33,9,76,43};
    int even[8]={5,2,9,4,7,6,1,0};
    cout <<"before swapping the altenate elements"<<endl;
    displayarray(even,8);
    swaparray(even,8);
    cout << endl;
    cout << "After swapping the alternate elements"<<endl;
    displayarray(even,8);
    return 0;
}