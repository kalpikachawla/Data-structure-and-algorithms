#include<iostream>
using namespace std;
int majority(int arr[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[6];
    cout<<"Enter the elements of the array :\n";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    if(majority(arr,6)==-1){
        cout<<"No majority element found!";
    }
    else{
        cout<<majority(arr,6)<<" is the majority element!";
    }
    return 0;
}