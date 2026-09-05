#include<iostream>
using namespace std;
bool Search(int arr[], int n, int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remaining = Search(arr+1,n-1,k);
        return remaining;
    }
}
int main(){
    int arr[5]={3,6,5,8,9};
    int n=5;
    int k=8;
    bool ans = Search(arr,n,k);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
}