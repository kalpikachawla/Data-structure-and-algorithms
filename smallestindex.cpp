#include<iostream>
#include<vector>
using namespace std;
int smallIndex(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        int sum = 0;
        while(num>0){
            int ld = num%10;
            sum+=ld;
            num=num/10;
        }
        if(sum==i){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={5,10,12,3,21,7};
    cout<<smallIndex(arr);
}