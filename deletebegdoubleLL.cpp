#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node*prev;
};
Node*head;
Node*tail;
Node*temp;
Node*new_node;
void delfrombegin(){
    temp=head;
    if(head==0){
        cout<<endl<<"List is empty";
    }
    else{
        head=head->next;
        head->prev=NULL;
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
        cout<<"Do you wanna continue ?";\
        cin>>choice;
    }
    cout<<"Before deletion :\n";
    display();
    delfrombegin();
    cout<<endl<<"After deletion :\n";
    display();
}