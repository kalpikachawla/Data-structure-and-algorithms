#include<iostream>
using namespace std;
void reverse(int arr[], int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse(arr,i+1, j-1);
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
    reverse(arr,0,n-1);
    cout<<"Reversed array :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}