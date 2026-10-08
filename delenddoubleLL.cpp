#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node*prev;
};
Node*head;
Node*temp;
Node*tail;
Node*new_node;
void end(){
    if(tail==0){
        cout<<"List is empty";
    }
    else{
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);
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
    tail=NULL;
    new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->prev=0;
        new_node->next=0;
        if(head==NULL){
            head=new_node;
            tail=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
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