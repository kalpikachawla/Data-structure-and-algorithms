#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter m :";
    cin>>m;
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<num<<" ";
            num++;
        
        }
        cout<<endl;
    }
}