#include<iostream>
using namespace std;
void subequence(string s,string ans){
  if(s.length()==0){
    cout<<ans<<endl;
    return;
  }
     subequence(s.substr(1),ans+s[0]);
     subequence(s.substr(1),ans);
}
int main(){
    string s;
    cout<<"Enter a string :";
    cin>>s;
    string ans="";
    subequence(s,ans);
}