#include<iostream>
using namespace std;
class Phones{
public:
    string name;
    double price;
    int storage;

    void display(){
        cout<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<storage<<endl;
    }
};
int main(){
    Phones p1;
    p1.name = "iPhone 12 mini";
    p1.price = 40000;
    p1.storage = 64;
    p1.display();
}