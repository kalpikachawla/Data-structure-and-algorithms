#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row :";
    cin>>r;
    cout<<"Enter column :";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all the elements :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix :\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum+=arr[i][j];
        }
        cout<<"Row "<<i+1<<" Sum "<<sum<<endl;
    }
    
}