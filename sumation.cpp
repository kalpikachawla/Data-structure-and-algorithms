#include<iostream>
using namespace std;
void sum(int i, int s){//parameterised way
    if(i<1){
        cout<<s<<" ";
        return;
    }
    sum(i-1,s+i);
}// functional way
int s(int i){
    int sum=0;
    if(i==0) return 0;
    return i+s(i-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    sum(n,0);
    cout<<s(n);
}