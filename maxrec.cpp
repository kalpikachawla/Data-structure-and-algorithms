#include<iostream>
using namespace std;
int largest(int arr[],int n){
   if(n==1) return arr[0];
   return max(arr[n-1],largest(arr,n-1));
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
    cout<<"Maximum element = "<<largest(arr,n);
}