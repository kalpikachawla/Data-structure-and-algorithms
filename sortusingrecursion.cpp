#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = isSorted(arr+1,n-1);
        return remaining;
    }
   
}
int main(){
    int arr[6]={6,5,4,3,2,1};
    int n = 6;
    bool ans = isSorted(arr,n);
    if(ans){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
}