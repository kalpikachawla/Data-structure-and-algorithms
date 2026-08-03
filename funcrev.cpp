#include<iostream>
using namespace std;
int reverse(int a){
    int rev=0,ld;
   while(a>0){
    ld=a%10;
    rev= rev*10+ld;
    a/=10;
   }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<reverse(n);
}