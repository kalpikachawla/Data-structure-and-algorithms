#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int ans = firstOcc(arr+1, n-1, key);
    if(ans==-1){
        return -1;
    }
    return ans + 1;
}
int main(){
    int arr[6];
    int n=6;
    cout<<"Enter all the elements of array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;
     int ans =firstOcc(arr, n, key);
    if(ans==-1){
        cout<<"No element found!";
        
    }
    else{
        cout<<"Element found at index "<<ans;
    }
    return 0;
}