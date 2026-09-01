#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter i :";
    cin>>i;
    int& j = i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j+=2;
    cout<<i<<endl;
}