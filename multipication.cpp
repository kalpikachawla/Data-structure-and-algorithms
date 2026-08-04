#include<iostream>
using namespace std;
void table(int a){
   for(int i=1; i<=10; i++){
    cout<<a<<"*"<<i<<"="<<a*i<<endl;
   }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    table(n);
}