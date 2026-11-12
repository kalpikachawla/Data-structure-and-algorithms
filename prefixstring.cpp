#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   int n=3;
   vector<string> a(n);
   for(int i=0; i<a.size(); i++){
        cin>>a[i];
   }
   string ans="";
   bool mismatch=false;
   for(int i=0; i<a[0].length(); i++){
    for(int j=1; j<a.size(); j++){
        if(i>=a[j].length() ||a[0][i]!=a[j][i]){
            mismatch=true;
            break;
        }
    }
    if(mismatch){
        break;
    }
    ans.push_back(a[0][i]);
   }
   if(ans.empty()){
    cout<<"No prefix string found!";
   }
   else{
    cout<<"The prefix string is : "<<ans;
   }
   return 0;
}