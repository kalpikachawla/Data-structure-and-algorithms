#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,6,7};
    int sum = 0;
    float avg = 0;
    int max = -1, smax = -1;
    int even = 0, odd = 0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        avg =(float)sum/5;
}
    cout<<"SUM : "<<sum<<endl<<"MAX : "<<max<<endl;
    cout<<"SECOND MAX : "<<smax<<endl<<"TOTAL EVEN : "<<even<<endl;
    cout<<"TOTAL ODD : "<<odd<<endl<<"AVERAGE : "<<avg<<endl;
}