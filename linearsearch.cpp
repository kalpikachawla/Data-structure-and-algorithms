#include<iostream>
using namespace std;
int main(){
    int n[5] = {2,8,7,0,9};
    int x;
    cout<<"Enter x :";
    cin>>x;
    for(int i=0; i<5; i++){
        if(n[i]==x){
            cout<<i<<endl;
            return i;
        }
       
        }
           
} 