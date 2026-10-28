#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string :\n";
    cin>>a;
    string b;
    cout<<"Enter another string :\n";
    cin>>b;
    int n=a.length();
    int m=b.length();
    if(n!=m){
        cout<<"No it can't be rotation";
    }
    string c = a+a;
    if(c.find(b)!=string ::npos){
        cout<<"b is the rotation of a";
    }
    else{
        cout<<"b is not the rotation of a";
    }
}