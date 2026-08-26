#include<iostream>
using namespace std;
int sqrt(int n){
    int s = 0;
    int e = n;
    long long int mid=(s+e)/2;
    long long int ans = -1;
    while(s<e){
     long long int square = mid * mid;
       if(square==n){
        return mid;
       }
        else if(mid*mid>n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
      mid = (s+e)/2;  
    }

}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<sqrt(n);
}