#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>arr, int n, int m, int mid){
    int blocksum = 0;
    int painter = 1;
    for(int i=0; i<n; i++){
        if(blocksum+arr[i]<=mid){
            blocksum+=arr[i];
        }
        else{
            painter++;
            if(painter>m || arr[i]>mid){
                return false;
            }
            blocksum=0;
            blocksum = arr[i];
        }
    }
    return true;
}
int main(){
    vector<int> arr={5,5,5,5};
    int n = arr.size();
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int m = 2;
    int e = sum;
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    cout<<"Minimum time is : "<<ans;
}