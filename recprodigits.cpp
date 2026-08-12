#include<iostream>
using namespace std;
int product(int pro, int n){
    if(n==0) return pro;
    return product(pro*(n%10), n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<product(1,n);
}