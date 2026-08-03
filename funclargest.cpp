#include<iostream>
using namespace std;
void largest(int a,int b,int c){
    if(a>b && a>c){
        cout<<"a is the greatest";
    }
    else if(b>a && b>c){
        cout<<"b is the greatest";
    }
    else{
        cout<<"c is the greatest";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<"Enter c :";
    cin>>c;
    largest(a,b,c);
}