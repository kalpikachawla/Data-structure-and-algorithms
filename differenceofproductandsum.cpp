#include<iostream>
using namespace std;
int difference(int n){
    int sum = 0;
    int product = 1;
    while(n>0){
        int ld = n%10;
        product*=ld;
        sum+=ld;
        n=n/10;
    }
    return product-sum;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<difference(n);
}