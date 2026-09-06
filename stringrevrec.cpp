#include<iostream>
using namespace std;
void reverse(string&s,int n, int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,n,i,j);
}
int main(){
    string s = "Kalpika";
    int n = s.length();
    int i=0,j=n-1;
    reverse(s,n,i,j);
    cout<<s<<endl;
}