#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*temp;
Node*new_node;
void find(){
    int target, pos=1;
    cout<<endl<<"Enter the value you need :";
    cin>>target;
    bool found = false;
    temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            cout<<"Element found at "<<pos;
            found=true;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(found==false){
        cout<<"No element found"<<endl;
    }
}
void display(){
    temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    temp=NULL;
    new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node= new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=0;
        if(head==NULL){
            head=new_node;
            temp=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
        }
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    display();
    find();
}