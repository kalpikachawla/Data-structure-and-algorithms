#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *i=arr;
    int *j=arr+4;
    while(i<=j){
        int temp=*i;
        *i=*j;
        *j=temp;
        i++;
        j--;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}