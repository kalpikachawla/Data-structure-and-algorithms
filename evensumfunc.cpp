#include<iostream>
using namespace std;
int sum(int a){
    int sum=0;
    for(int i=0; i<=a; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"The sum is : "<<sum(n);
    
}