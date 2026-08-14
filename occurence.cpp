#include<iostream>
using namespace std;
int occurence(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
         int mid = (s+e)/2;
        if(arr[mid]==x){
            ans = mid;
            e = mid - 1;// first occurence
            s = mid + 1; // last occurence;
        }
        else if(arr[mid]>x){
            e = mid - 1;
        }
        else if(arr[mid]<x){
            s = mid + 1;
        }
    }
    return ans;
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
    int x;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Last occurence : "<<occurence(arr,n,x);
}