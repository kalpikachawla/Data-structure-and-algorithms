#include<iostream>
using namespace std;
bool sort(int arr[],int n){
    if(n==1) return true;
    if(arr[0]>arr[1]) return false;
    return sort(arr+1,n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(sort(arr,n)){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Array is not sorted!";
    }
}