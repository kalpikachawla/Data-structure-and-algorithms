#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,2,3,6};
    int n=6;
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    int k=i+1;
    for(int a=0; a<k; a++){
        cout<<arr[a]<<" ";
    }
}