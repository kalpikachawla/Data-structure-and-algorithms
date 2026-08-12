#include<iostream>
using namespace std;
int sumd(int sum, int n){
    if(n==0) return sum;
    return sumd(sum + n%10 , n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<sumd(0,n);
}