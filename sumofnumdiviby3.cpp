#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum = 0;
    for(int i=0; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"The sum of numbers divisible by 3 is : "<<sum;
}