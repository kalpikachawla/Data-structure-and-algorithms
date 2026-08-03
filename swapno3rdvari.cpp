#include<iostream>
using namespace std;
void swapnum(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of b : "<<b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
   swapnum(a,b);
}