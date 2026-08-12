#include<iostream>
using namespace std;
int summ(int arr[], int sum , int n){
    if(n==0) return sum;
    return summ(arr+1, sum+arr[0], n-1);
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
    cout<<"Sum = "<<summ(arr,0,n);
}