#include<iostream>
using namespace std;
int first(int arr[],int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=i+1; j<9; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>0){
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int arr[9]={1,5,6,7,8,9,9,0,2};
    cout<<first(arr,9);
}