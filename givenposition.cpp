#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
int main(){
    Node*head = NULL;
    Node*temp = NULL;
    Node*new_node = NULL;
    int choice = 1;
    while(choice==1){
        new_node = new Node;
        cout<<"Enter data";
        cin>>new_node->data;
        new_node->next = NULL;
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
    temp = head;
    cout<<"Actual linked list :\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    int pos;
    cout<<"Enter the position after which you wanna insert :";
    cin>>pos;
    new_node=new Node;
    cout<<"Enter the value :";
    cin>>new_node->data;
    new_node->next=NULL;
    temp=head;
    for(int i=1; i<pos; i++){
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    temp=head;
    cout<<"Updated linked list :\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}