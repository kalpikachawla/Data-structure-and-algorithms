#include<iostream>
using namespace std;
void reverse(int arr[], int i, int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return;
}
void groups(int arr[], int n, int k){
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    cout<<"Your rotated array is :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int arr[6];
    cout<<"Enter the elements of the array :\n";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k :";
    cin>>k;
    groups(arr,6,k);
}