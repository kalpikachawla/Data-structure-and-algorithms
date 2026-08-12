#include<iostream>
using namespace std;
int reverse(int rev,int n){
    if(n==0) return rev;
    return reverse(rev*10+(n%10),n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<reverse(0,n);
}