#include<iostream>
using namespace std;
int single(int *arr){
    for(int i=0; i<6; i++){
        int count=0;
        for(int j=0; j<6; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }

    return -1;
}
int main(){
    int arr[6]={2,2,5,5,4,2};
    cout<<single(arr);
}