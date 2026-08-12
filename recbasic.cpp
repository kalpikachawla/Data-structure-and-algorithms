#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);// prints 1 to n
    cout<<n<<" ";
 }
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}