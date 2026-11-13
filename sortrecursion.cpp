#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted(arr+1,n-1);
}
int main(){
    int arr[6];
    int n=6;
    cout<<"Enter the elements of the array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Array is not sorted!";
    }
    return 0;
}