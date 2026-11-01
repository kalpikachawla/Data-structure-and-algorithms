#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string :";
    getline(cin,a);
    int lower = 0;
    int upper = 0;
    int total = 0;
    for(int i=0; i<a.length(); i++){
        if(a[i]>='a' && a[i]<='z'){
            lower++;
        }
       else if(a[i]>='A' && a[i]<='Z'){
        upper++;
       }
    }
    total=lower+upper;
    cout<<"Uppercase letters : "<<upper<<endl;
    cout<<"Lowercase letters : "<<lower<<endl;
    cout<<"Total characters : "<<total;
}