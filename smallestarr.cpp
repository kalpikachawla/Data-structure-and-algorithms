#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of array :\n";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int smallest = arr[0];
    for(int i=0; i<5; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout<<"SMALLEST : "<<smallest;
    
}
