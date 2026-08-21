#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}


void print(int ans[], int n){
    cout<<"Merged array is :\n";
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }
    int arr2[3];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<3; i++){
        cin>>arr2[i];
    }
    int arr3[8] = {0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
}