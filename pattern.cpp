#include<iostream>
using namespace std;
void print(int n){
    int spaces = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int q=0; q<spaces; q++){
            cout<<" ";
        }

         for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        spaces+=2;
        cout<<endl;
        
    }
    spaces = 2*n-2;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        spaces-=2;
        cout<<endl;
        
        
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}