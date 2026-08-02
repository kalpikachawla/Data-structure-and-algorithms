#include<iostream>
using namespace std;
void sumdigits(int a){
    int sum = 0;
    int ld;
    for(int i=0; i<=a; i++){
        ld=a%10;
        a=a/10;
        sum+=ld;
    }
    cout<<"The sum of digits is : "<<sum;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    sumdigits(n);
}

