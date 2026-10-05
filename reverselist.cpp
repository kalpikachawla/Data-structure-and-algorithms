#include<iostream>
using namespace std;
class Node{
public :
    int data;
    Node*next;
};
int main(){
    Node*head=NULL;
    Node*temp=NULL;
    Node*new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data : ";
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
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    cout<<"Before reversing :\n";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    Node* prev = NULL;
    Node* nextNode = NULL;
    temp = head;
    while(temp != NULL){
    nextNode = temp->next;
    temp->next = prev;
    prev = temp;
    temp = nextNode;
}
    head = prev;
    temp=head;
    cout<<endl;
    cout<<"After reversing :\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}