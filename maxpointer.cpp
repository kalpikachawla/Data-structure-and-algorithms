#include<iostream>
using namespace std;
int main(){
    int arr[]={8,10,5,19,90};
    int *p=arr;
    int max=*p;
    for(int i=0; i<5; i++){
        if(max<*(p+i)){
            max=*(p+i);
        }
    }
    cout<<"Max : "<<max;
}