#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum = 0;
    int count = 0;
    for(int i=0; i<=n; i++){
        sum = sum + count;
        count++;
    }
    cout<<"The total sum is : "<<sum;
}