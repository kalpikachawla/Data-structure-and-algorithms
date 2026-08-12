#include<iostream>
using namespace std;
bool search(int arr[], int x, int n,int size){
    if(n==size) return false;
    if(arr[0]==x) return true;
    return search(arr+1, x, n+1,size);
}
int main(){
    int n;
    cout<<"Enter size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
}
    int x;
    cout<<"Enter target value :";
    cin>>x;
    search(arr,x,0,n);
    if(search(arr,x,0,n)){
        cout<<"Element found!";
    }
    else{
        cout<<"Element not found!";
    }
}