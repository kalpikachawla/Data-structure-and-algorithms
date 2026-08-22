#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3};
    int arr2[3]={5,6,7};
    int sum[3];
    for(int i=0; i<3; i++){
        sum[i]=arr1[i]+arr2[i];
    }
    cout<<"Sum : "<<endl;
    for(int i=0; i<3; i++){
        cout<<sum[i]<<" ";
    }
}