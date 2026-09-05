#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    else{
        int sum = arr[0]+getSum(arr+1,n-1);
        return sum;
    }
}
int main(){
    int arr[6]={2,4,5,7,8,9};
    int n = 6;
    int ans = getSum(arr,n);
    cout<<ans;
}