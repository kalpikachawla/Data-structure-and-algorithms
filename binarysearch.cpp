#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int x){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
        else if(mid<x){
            s = mid + 1;
        }
        mid = (s+e)/2;
    }
    return -1;
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
    int x;
    cout<<"Enter x :";
    cin>>x;
    cout<<binarySearch(arr, n, x);
}