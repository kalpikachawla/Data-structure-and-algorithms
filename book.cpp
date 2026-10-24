#include<iostream>
using namespace std;
class Book{
public:
    string title;
    string author;
    float price;
};
Book b1;
void display(){
    cout<<"Title : "<<b1.title;
    cout<<endl<<"Author : "<<b1.author;
    cout<<endl<<"Price : "<<b1.price;
}
void Input(){
    cout<<"Enter the title of the book :\n";
    cin>>b1.title;
    cout<<endl<<"Enter the name of the author :\n";
    cin>>b1.author;
    cout<<endl<<"Enter the price of the book :\n";
    cin>>b1.price;
}
int main(){
    Input();
    display();
}