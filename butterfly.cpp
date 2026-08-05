#include<iostream>
using namespace std;
void print(int n){
    int spaces = 2*n-2;
    int stars=0;
    for(int i=0; i<2*n-1; i++){
        if(i<n) stars++;
        else stars--;
      for(int j=0; j<stars; j++){
            cout<<"*";
        }
        for(int q=1; q<=spaces; q++){
            cout<<" ";
        }
         for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
          if(i<n-1){
          spaces-=2;
   }
   else{
    spaces+=2;
  }
        
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}