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
Node*new_node;
Node*tail;
void position(){
    temp=head;
    new_node=new Node;
    int pos,i=1;
    cout<<endl<<"Enter position :";
    cin>>pos;
    cout<<"Enter data ";
    cin>>new_node->data;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;
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
        new_node->next=0;
        new_node->prev=0;
        if(head==NULL){
            tail=new_node;
            head=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    cout<<"Before insertion :\n";
    display();
    position();
    cout<<"After insertion :\n";
    display();
}