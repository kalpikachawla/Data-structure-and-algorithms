#include<iostream>
using namespace std;
int getlength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}
bool palindrome(char ch[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[9];
    cout<<"Enter your word : ";
    cin>>ch;
    int n = getlength(ch);
    bool ans = palindrome(ch,n);
    if(ans){
        cout<<"It is a palindrome.";
    }
    else{
        cout<<"It is not a palindrome.";
    }
}