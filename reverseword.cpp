#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"Enter string :";
    getline(cin,a);
   int s = 0;
   int e;
   for(int i=0; i<a.length(); i++){
    if(a[i]==' '){
        e=i-1;
        for(int j=e; j>=s; j--){
            cout<<a[j];
        }
        cout<<" ";
        s=i+1;
    }
   }
   for(int k=a.length(); k>=s; k--){
    cout<<a[k];
   }
}