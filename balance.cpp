#include<iostream>
using namespace std;
class Bank{
public:
    string holder;
    int number;
    int balance;
};
 Bank b1;
 int withdraw;
 int final;
void Input(){
    cout<<"Enter holder name :\n";
    cin>>b1.holder;
    cout<<"\nEnter account number :\n";
    cin>>b1.number;
    cout<<"\nEnter balance amount :\n";
    cin>>b1.balance;
}
void display(){
    cout<<endl<<endl;
    cout<<endl<<"Holder Name : "<<b1.holder<<endl;
    cout<<"Account number : "<<b1.number<<endl;
    cout<<"Balance amount : "<<b1.balance<<endl;
    cout<<"Withdrawal amount : "<<withdraw<<endl;
    cout<<"Remaining amount is : "<<final;
}
int main(){
    Input();
    cout<<"Enter the amount you wanna withdraw:\n";
    cin>>withdraw;
    final = b1.balance-withdraw;
    cout<<endl<<"Remaining amount is :\n"<<final;
    display();
}