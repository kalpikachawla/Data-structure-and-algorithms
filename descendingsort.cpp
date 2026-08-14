#include<iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
      int maxndex = i;
      for(int j=i+1; j<n; j++){
        if(arr[j]>arr[maxndex]){
            maxndex = j;
        }
      }
      swap(arr[maxndex],arr[i]);
    }
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
    sort(arr,n);
    cout<<"Sorted array :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}