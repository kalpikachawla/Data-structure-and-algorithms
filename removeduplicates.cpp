#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"Enter the word : \n";
    cin>>word;
    for(int i=0; i<word.length(); i++){
        bool found=false;
        for(int j=0; j<i; j++){
           if(word[i]==word[j]){
            found=true;
            break;
           }
    }
    if(!found){
        cout<<word[i];
    }
}
}