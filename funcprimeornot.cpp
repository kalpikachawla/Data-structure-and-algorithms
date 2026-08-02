#include<iostream>
using namespace std;
int prime(int a){
    int isprime=0;
    int i=2;
    while(i<=(a-1)){
        if(a%i==0){
            cout<<"Not a prime number";
            return 0;
         }
        
        i++;
    }
     cout<<"Prime number";
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    prime(n);

}