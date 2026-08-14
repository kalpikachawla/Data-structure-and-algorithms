#include<iostream>
using namespace std;
int  sort(int arr[], int n){
    int swaps = 0;
    for(int i=0; i<n-1; i++){
      int minindex = i;
      for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minindex]){
            minindex = j;
        }
      }
      if(minindex!=i){
        swap(arr[i],arr[minindex]);
        swaps++;
      }
    }
    return swaps;
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
    int swaps = sort(arr,n);
    cout<<"Sorted array :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Swaps : "<<swaps;

}