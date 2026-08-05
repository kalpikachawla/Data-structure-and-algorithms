#include<iostream>
using namespace std;
void print(int n){
    for(int i=0; i<n; i++){
         char ch = 'A';
        for(int j=0; j<=n-i-1;j++){
            cout<<" ";
        }
        for(int q=0; q<2*i+1; q++){
            cout<<ch;
            if(q<i) ch++;
            else ch--;
           
        }
        for(int k=0; k<n-i+1; k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}