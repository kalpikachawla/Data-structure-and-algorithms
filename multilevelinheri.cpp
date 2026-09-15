#include<iostream>
using namespace std;
class Animal {
public:
    int age;
    int weight;
};
class Dog : public Animal{
    public:
    void Speak(){
        cout<<"I am speaking"<<endl;
    }
};
class Cat:public Animal{
    public:
    void milk(){
        for(int i=0; i<3; i++){
            cout<<"Loves Milk"<<endl;
        }
    }
};
int main(){
    Dog d1;
    d1.Speak();
    cout<<d1.age<<endl;
    Cat c1;
    c1.milk();
    cout<<c1.age<<endl;
}