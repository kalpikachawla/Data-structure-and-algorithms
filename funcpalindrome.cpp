#include<iostream>
using namespace std;
void palindrome(int a){
    int rev=0, ld;
    int temp=a;
    while(a>0){
        ld = a%10;
        rev=rev*10+ld;
        a/=10;
    }
    cout<<"Reversed number :"<<rev<<endl;
    if(temp==rev){
        cout<<"It is a palindrome";
    }
    else {
        cout<<"It is not a palindrome";
    }
    
    
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    palindrome(n);
}