#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    int *p=&x;
    int rev = 0;
    while(*p!=0){
        int ld = (*p)%10;
        rev = (rev*10)+ld;
        *p=(*p)/10;
    }
    cout<<rev;
    
}