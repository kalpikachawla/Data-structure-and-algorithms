#include<iostream>
using namespace std;
class Subjects{
public :
    string first;
    string second;
    string worst;
    void display(){
        cout<<"First fav subject : "<<first<<endl;
        cout<<"Second fav subject : "<<second<<endl;
        cout<<"Most hated subject : "<<worst<<endl;
    }
};
int main(){
    Subjects s1;
    s1.first = "SST";
    s1.second = "HINDI";
    s1.worst = "PHYSICS";
    s1.display();
}