#include<iostream>
using namespace std;
void print(int n){
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    while(n>0){
          int a=n%10;
          print(a);
          n=n/10;
        
    }
}