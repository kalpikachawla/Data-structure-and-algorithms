#include<iostream>
using namespace std;
int bintodec(int a){
    int ans=0, pow=1;
    while(a>0){
        int rem=a%10;
        ans+=(rem*pow);
        a/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<bintodec(n);
   
}

    

