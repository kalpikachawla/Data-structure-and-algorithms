#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string :";
    cin>>str;
    string temp = str;
    string rev = "";
    for(int i=str.length()-1; i>=0; i--){
        rev+=str[i];
}
if(temp==rev){
            cout<<temp<<" is a palindrome!"<<endl;
        }
        else{
            cout<<temp<<" is not a palindrome!"<<endl;
        }
    }
