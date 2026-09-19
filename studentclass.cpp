#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    int marks;
    void display(){
        cout<<endl<<endl;
        cout<<"Your Output is :\n";
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<marks<<endl;
    }
};
int main(){
    Student s1;
    cin>>s1.age>>s1.name>>s1.marks;
    s1.display();
}