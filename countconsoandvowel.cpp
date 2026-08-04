#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<endl;
    cout<<"Enter a string with lowercase alphabets :";
    cin>>str;
    int vowelcount = 0;
    int consocount = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowelcount++;
        }
        else{
            consocount++;
        }
    }
    cout<<"Total number of vowels is : "<<vowelcount<<endl;
    cout<<"Total number of consonents is : "<<consocount;
}