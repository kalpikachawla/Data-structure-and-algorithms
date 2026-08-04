#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<6; i++){
        sum+=arr[i];
    }
    cout<<"The sum is : "<<sum<<endl;
    double avg = static_cast<double>(sum)/6;
    cout<<"The average is : "<<avg;
}
