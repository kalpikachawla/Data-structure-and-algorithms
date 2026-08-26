#include<iostream>
using namespace std;
int firstocc(int arr[], int n , int k){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid - 1;
        }
        else if(k>arr[mid]){
            s = mid + 1;
        }
        else if(k<arr[mid]){
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int lastocc(int arr[], int a, int b){
     int s = 0;
    int e = a-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==b){
           ans = mid;
           s = mid + 1;
        }
        else if(b>arr[mid]){
            s = mid + 1;
        }
        else if(b<arr[mid]){
            e = mid -1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter a sorted array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k :";
    cin>>k;
    cout<<"First occurence of "<<k<<" is "<<firstocc(arr,n,k)<<endl;
    cout<<"Last occurence of "<<k<<" is "<<lastocc(arr,n,k)<<endl;

}