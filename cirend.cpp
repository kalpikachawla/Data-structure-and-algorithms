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
Node*tail;
void end(){
    temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=head;
    delete tail;
    tail=temp;
}
void display(){
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main(){
    head=NULL;
    temp=NULL;
    new_node=NULL;
    tail=NULL;
    int choice=1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=0;
        if(head==NULL){
            head=new_node;
            tail=new_node;
            tail->next=head;
        }
        else{
            tail->next=new_node;
            tail=new_node;
            tail->next=head;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    cout<<"Before deletion :\n";
    display();
    end();
    cout<<endl<<"After deletion :\n";
    display();
}