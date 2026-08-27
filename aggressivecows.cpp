#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid){
    int cowcount = 1;
    int lastpos = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==m){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int main(){
    vector<int> arr={4,3,2,1,6};
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int s = 0;
    int m = 2;
    int e = arr[n-1]-arr[0];
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    cout<<"Minimum largest distance is : "<<ans;
    
}