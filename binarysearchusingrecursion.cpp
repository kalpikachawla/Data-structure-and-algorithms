#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int n,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return BinarySearch(arr,n,mid+1,e,k);
    }
    else{
        return BinarySearch(arr,n,s,mid-1,k);
    }
}
int main(){
    int arr[6]={1,4,5,7,8,9};
    int n=6;
    int k=2;
    int s=0;
    int e=n-1;
    if(BinarySearch(arr,n,s,e,k)){
        cout<<"Found!";
    }
    else{
        cout<<"Not found!";
    }
}