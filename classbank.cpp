#include<iostream>
#include<vector>
using namespace std;
class Bank{
public :
    int accno;
    string name;
    float balance;

   Bank(int a,string n, float b){
   accno=a;
   name=n;
   balance=b;
   }
    void print(){
        cout<<"Account number : "<<accno<<endl;
        cout<<"Holder name : "<<name<<endl;
        cout<<"Bank balance : "<<balance;

    }
};
int main(){
    Bank a1(123,"Sam",23450.8);
    a1.print();


   
}