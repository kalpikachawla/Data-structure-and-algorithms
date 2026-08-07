#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int temp=n;
    int sum = 0;
    while(n>0){
        int ld=n%10;
        sum+=ld*ld*ld;
        n=n/10;
    }
    if(temp==sum){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
    
}

