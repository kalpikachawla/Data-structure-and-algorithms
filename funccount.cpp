#include<iostream>
using namespace std;
int count(int a){
    int count=0,ld;
    while(a>0){
        ld = a%10;
        a/=10;
        count++;
    }
    return count;
    
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<count(n);
}
