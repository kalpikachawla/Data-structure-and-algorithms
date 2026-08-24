#include<iostream>
using namespace std;
int getlength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}
void reverse(char ch[],int count){
    int s=0;
    int e=count-1;
    int mid = (s+e)/2;
    while(s<=e){
        swap(ch[s++], ch[e--]);
    }

}
int main(){
    char ch[9];
    cout<<"Enter your name : ";
    cin>>ch;
    cout<<"Your name is : "<<ch<<endl;
    int count = getlength(ch);
    reverse(ch,count);
    cout<<"Your reversed name is : "<<ch;
}