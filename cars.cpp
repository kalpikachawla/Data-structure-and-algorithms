#include<iostream>
using namespace std;
class Car{
public :
    string name;
    double price;
    int total;

void display(){
    cout<<endl;
    cout<<"NAME :"<<name<<endl;
    cout<<"Price :"<<price<<endl;
    cout<<"Total no of people who own :"<<total<<endl;
}
};
int main(){
    Car c1;
    c1.name = "Punch";
    c1.price = 100000;
    c1.total = 90;
    c1.display();
}