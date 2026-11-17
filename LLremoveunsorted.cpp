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
void duplicates(Node*head){
    temp=head;
    while(temp!=NULL){
        Node*same=temp;
        while(same->next!=NULL){
            if(temp->data==same->next->data){
                Node*found=same->next;
                same->next=same->next->next;
                delete found;
            }
            else{
                same=same->next;
            }
        }
        temp=temp->next;
    }
    return;
}
void display(){
    temp=head;
    cout<<"Duplicates removed :\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    head=temp=new_node=NULL;
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
    duplicates(head);
    display();
}