#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence;
    string word="";
    string longest = "";
    cout<<"Enter sentence :\n";
    getline(cin, sentence);
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i]!=' '){
            word+=sentence[i];
        }
      else{
        if(word.length()>longest.length()){
            longest=word;
        }
        word="";
      }
    }
     if(word.length()>longest.length()){
        longest=word;
      }
    cout<<"The longest word is : "<<longest;
    cout<<endl<<"Length : "<<longest.length();
 
}