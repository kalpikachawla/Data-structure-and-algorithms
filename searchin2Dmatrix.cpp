#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter the elements :\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter target :";
    cin>>target;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==target){
                cout<<target<<" found at : "<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<"No target found!";
}