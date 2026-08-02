#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        char ch ='A'+i;
        for(int q=0; q<n-i; q++){
            cout<<ch;
            
        }
        cout<<endl;
    }
}