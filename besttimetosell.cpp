#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int minprice=INT_MAX;
    int profit = 0;
    for(int i=0; i<6; i++){
        if(arr[i]<minprice){
            minprice=arr[i];
        }
        profit=max(profit,arr[i]-minprice);
    }
    cout<<profit<<" is the maximum profit!";
}