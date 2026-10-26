#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"Enter your word :\n";
    cin>>word;
    for(int i=0; i<word.length(); i++){
        int count = 0;
        for(int j=0; j<word.length(); j++){
            if(word[i]==word[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"First Non-repeating character is : "<<word[i];
            break;
        }
        else{
            cout<<"No non-repeating character is present";
            break;
        }
    }

}