#include<iostream>
#include<cctype>
using namespace std;
bool validPalindrome(string s,int i,int j){
    while(i<=j){
        if(!isalnum(s[i])){
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else{
            if(tolower(s[i])!=tolower(s[j])){
        return false;
       }
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "Kanak";
    int i=0;
    int j=s.length()-1;
    cout<<validPalindrome(s,i,j);
}