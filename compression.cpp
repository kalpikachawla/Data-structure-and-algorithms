#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter word :";
    cin>>a;
    for(int i=0; i<a.length(); i++){
        int count = 1;
        int j=i+1;
        while(j<a.length() && a[i]==a[j]){
            count++;
            j++;
        }
        cout<<a[i]<<" "<<count<<" ";
        i=j-1;
    }
}