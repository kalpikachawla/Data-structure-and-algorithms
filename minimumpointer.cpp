#include<iostream>
using namespace std;
int main(){
   int arr[]={10,5,9,8,20};
   int *p=arr;
   int min= *p;
   for(int i=0; i<5; i++){
    if(min>*(p+i)){
        min=*(p+i);
    }
   }
   cout<<"Min : "<<min;
}