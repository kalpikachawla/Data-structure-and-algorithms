#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter age :";
    cin>>n;
    if(n>=18){
        cout<<"The person is eligible to get a license";
    }
    else{
        cout<<"The person is not eligible to get a license";
    }
}