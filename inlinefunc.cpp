#include<iostream>
using namespace std;
inline int getMax(int& a, int& b){
    return (a>b) ? a : b;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<getMax(a,b);
}