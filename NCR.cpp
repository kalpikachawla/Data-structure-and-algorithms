#include<iostream>
using namespace std;
int fact(int a){
    int fact = 1;
    for(int i=1; i<=a; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n , int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int r;
    cout<<"Enter r :";
    cin>>r;
    cout<<nCr(n,r)<<endl;
   }