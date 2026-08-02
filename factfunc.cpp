#include<iostream>
using namespace std;
void fact(int a){
    int fact = 1;
    for(int i=2; i<=a; i++){
        fact = fact * i;
    }
    cout<<"The factorial is : "<<fact;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    fact(n);

}