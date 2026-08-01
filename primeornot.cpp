#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int i=2;
    while(i<=(n-1)){
        if(n%i==0){
            cout<<"It is  not a prime number";
            return 0;
         }
         i++;
    }
     cout<<"It is a prime number";
}