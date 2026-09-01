#include<iostream>
using namespace std;
int getPro(int*arr, int n){
    int pro = 1;
    for(int i=0; i<n; i++){
        pro*=arr[i];
    }
    return pro;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int * arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Product is : "<<getPro(arr,n);
}