#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*tail;
Node*temp;
Node*new_node;
void deleteBeg(){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    temp=head;
    if(head==tail){
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    else{
        head=head->next;
        tail->next=head;
        return;
    }
}
void display(){
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    return;
}
int main(){
    head=NULL;
    tail=NULL;
    temp=NULL;
    new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node = new Node;
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
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    cout<<"Before deletion :\n";
    display();
    deleteBeg();
    cout<<endl<<"After deletion :\n";
    display();
}