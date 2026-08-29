#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int *i=arr;
    int *j=arr+5;
    while(i<j){
        if(*i+*j<7){
            i++;
        }
        else if(*i+*j>7){
            j--;
        }
        else{
            cout<<*i<<" "<<*j;
            break;
        }
    }
    
}
