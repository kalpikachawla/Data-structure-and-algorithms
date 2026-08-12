#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    if(n==0) return fact;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<factorial(n);
}