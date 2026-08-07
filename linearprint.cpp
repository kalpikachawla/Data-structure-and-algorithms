#include<iostream>
using namespace std;
void print(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    print(i-1,n);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int i;
    cout<<"Enter i :";
    cin>>i;
    print(i,n);
}