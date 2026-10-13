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
Node*tail;
void Position(){
    Node*current;
    Node*nextNode;
    current=tail->next;
    int pos, i=1;
    cout<<endl<<"Enter position :";
    cin>>pos;
    if(pos<1){
        cout<<"Invalid position";
        return;
    }
    else{
        while(i<pos-1){
            current=current->next;
            i++;
        }
        nextNode=current->next;
        current->next=nextNode->next;
    }
    delete nextNode;
    return;
}
void display(){
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
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
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    cout<<"Before deletion :\n";
    display();
    Position();
    cout<<endl<<"After deletion :\n";
    display();
}