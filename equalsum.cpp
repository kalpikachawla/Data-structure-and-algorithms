#include<iostream>
using namespace std;
void sum(int arr[], int n,int target){
    int i=0; 
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            cout<<"The pair of numbers is : "
            <<arr[i]<<" "<<arr[j];
            return;
       }
    }
    cout<<"No pair found!";
    return;
}
int main(){
    int arr[6];
    cout<<"Enter all the elements of the sorted array :\n";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int target;
    cout<<endl<<"Enter target value :";
    cin>>target;
    sum(arr,6,target);
}   