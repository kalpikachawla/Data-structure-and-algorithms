#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int q=0; q<2*i+1; q++){
            cout<<"*";
        }
        for(int k=0; k<n-i-1; k++){
             }
             cout<<endl;
}
}
void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int q=0; q<i; q++){
            cout<<" ";
        }
        cout<<endl;
    }

    }

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print1(n);
    print2(n);
}