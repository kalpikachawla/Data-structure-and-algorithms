#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}