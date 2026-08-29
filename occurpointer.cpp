#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,5,6,9};
    int *p=arr;
    int x;
    cout<<"Enter a value :";
    cin>>x;
    int count = 0;
    for(int i=0; i<7; i++){
        if(*(p+i)==x){
            count++;
        }
    }
    cout<<x<<" occurs "<<count<<" times.";
}