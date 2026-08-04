#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter a number :";
    cin>>b;
    char op;
    cout<<"Enter a operator :";
    cin>>op;
    switch (op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Invalid operator";
        
    }
    
}