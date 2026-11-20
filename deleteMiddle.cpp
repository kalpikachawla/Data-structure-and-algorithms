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
int MiddleNode(){
    Node*slow=head;
    Node*fast=head;
    Node*prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    delete slow;
}
void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    head=new_node=temp=NULL;
    int choice=1;
   while(choice==1){
    new_node=new Node;
    cout<<"Enter data :";
    cin>>new_node->data;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=new_node;
    }
    cout<<"Do you wanna continue ?";
    cin>>choice;
   }
   MiddleNode();
    cout<<endl<<"Your linked list is :\n";
    display();
}