#include<iostream>
using namespace std;
int dectobinary(int a){
    int ans=0, power = 1;
    while(a>0){
        int rem=a%2;
        a=a/2;
        ans+=(rem*power);
        power*=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number :" ;
    cin>>n;
    for(int i=1; i<=10; i++){
          cout<<dectobinary(i)<<endl;
    }
  
}