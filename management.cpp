#include<iostream>
using namespace std;
class Student{
public :
    int rollNo;
    string name;
    int marks;
};
Student s1;
void display(){
    cout<<endl<<"Name :\n"<<s1.name<<endl;
    cout<<"Roll no :\n"<<s1.rollNo<<endl;
    cout<<"Marks :\n"<<s1.marks;
}
int main(){
    cout<<"Enter name :";
    cin>>s1.name;
    cout<<endl<<"Enter roll no :";
    cin>>s1.rollNo;
    cout<<endl<<"Enter marks:";
    cin>>s1.marks;
    display();
}