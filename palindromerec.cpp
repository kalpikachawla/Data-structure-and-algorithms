#include<iostream>
using namespace std;
int reverse(int rev,int n){
    if(n==0) return rev;
    return reverse(rev*10+(n%10),n/10);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int rev = reverse(0,n);
    int original = n;
    if(original==rev){
        cout<<"It is a palindrome!";
    }
    else{
        cout<<"It is not a palindrome!";
    }
}