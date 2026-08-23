#include<iostream>
using namespace std;
class Rectangle{
public :
    int length;
    int breadth;

    void area(int a , int b){
        int ans = a*b;
        cout<<ans<<endl;
    }

    void perimeter(int a , int b){
        int ans = 2*(a+b);
        cout<<ans;
    }
};
int main(){
    Rectangle r1;
    r1.length = 2;
    r1.breadth = 3;
    r1.area(2,3);
    r1.perimeter(2,3);
}