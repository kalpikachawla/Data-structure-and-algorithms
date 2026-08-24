#include<iostream>
using namespace std;
int getlength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char ch[9];
    cout<<"Enter your name :";
    cin>>ch;
    cout<<"Your name is : ";
    cout<<ch<<endl;
    cout<<"Length : "<<getlength(ch);
}