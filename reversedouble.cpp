#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*prev;
    Node*next;
};
Node*head;
Node*temp;
Node*tail;
Node*new_node;
Node*nextnode;
void reverse(){
  temp=head;
  while(temp!=0){
    nextnode=temp->next;
    temp->next=temp->prev;
    temp->prev=nextnode;
    temp=nextnode;
  }
  temp=head;
  head=tail;
  tail=temp;
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
    tail=NULL;
    int choice=1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->prev=0;
        new_node->next=0;
        if(head==NULL){
            tail=new_node;
            head=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    cout<<"Before reverse :\n";
    display();
    reverse();
    cout<<endl<<"After reversing :\n";
    display();
}