#include<iostream>
using namespace std;
bool palindrome(int i,string &n){
    if(i>=n.size()/2) return true;
    if(n[i]!=n[n.size()-i-1]) return false;
     return palindrome(i+1,n);
}
int main(){
    string n;
    cout<<"Enter a string :";
    cin>>n;
   cout<<palindrome(0,n);
}