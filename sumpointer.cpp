#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *p=arr;
    int sum=*p;
    for(int i=1; i<5; i++){
        sum+=*(p+i);
    }
    cout<<"Sum of elements : "<<sum;
}