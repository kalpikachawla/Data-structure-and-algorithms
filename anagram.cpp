#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter word :";
    cin>>a;
    cout<<endl<<"Enter another word :";
    cin>>b;
    if(a.length()!=b.length()){
        cout<<"They cannot be anagram";
    }
    for(int i=0; i<a.length(); i++){
        int freqA=0;
        int freqB=0;
        for(int j=0; j<b.length(); j++){
            if(a[i]==a[j]){
                freqA++;
            }
            if(a[i]==b[j]){
                freqB++;
            }
        }
        if(freqA!=freqB){
            cout<<a<<" and "<<b<<" are not anagram";
            break;
        }
        else{
            cout<<a<<" and "<<b<<" are anagrams";
            break;
        }
    }
}