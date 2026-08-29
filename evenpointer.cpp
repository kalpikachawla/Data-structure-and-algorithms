#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,8,9};
    int *p=arr;
    int count=0;
    for(int i=0; i<5; i++){
        if(*(p+i)%2==0){
            count++;
        }
    }
    cout<<"Total even elements : "<<count;
}