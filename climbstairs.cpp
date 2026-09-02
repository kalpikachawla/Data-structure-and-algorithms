#include<iostream>
using namespace std;
int climb(int n){
    if(n<0){
        return 0;
    }
    else if(n==0){
        return 1;
    }
    else{
        return climb(n-1)+climb(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<climb(n);

}