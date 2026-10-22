#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*new_node;
Node*temp;
void remove(){
    temp=head;
    while(temp->next!=NULL){
        if(temp->data!=temp->next->data){
            temp=temp->next;
        }
        else{
            Node*duplicate=temp->next;
            temp->next=temp->next->next;
            delete duplicate;
        }
    }
}
void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    new_node=NULL;
    temp=NULL;
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
    temp=head;
    while(temp->next!=NULL){
        if(temp->data!=new_node->data){
            temp=temp->next;
        }
        else{
            Node*duplicate=temp->next;
            temp->next=temp->next->next;
            delete duplicate;
        }
    }
    display();
    remove();
    cout<<endl<<"Duplicates removed :\n";
    display();
}