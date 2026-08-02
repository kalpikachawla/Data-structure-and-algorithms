#include<iostream>
using namespace std;
void sum(int a){
    int sum=0;
    int count=0;
    for(int i=0; i<=a; i++){
        sum+=count;
        count++;
    }
    cout<<"The sum of number is : "<<sum;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    sum(n);
}