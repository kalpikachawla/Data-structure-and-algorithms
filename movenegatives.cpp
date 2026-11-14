#include<iostream>
using namespace std;
void move(int arr[], int n){
    int i=0; 
    int j=n-1;
    while(i<j){
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
    }
    cout<<"Your array is :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int arr[6];
    cout<<"Enter the elements of array :\n";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    move(arr,6);
}