#include<iostream>
using namespace std;
int smallest(int arr[],int n){
   if(n==1) return arr[0];
   return min(arr[n-1],smallest(arr,n-1));
}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum element = "<<smallest(arr,n);
}