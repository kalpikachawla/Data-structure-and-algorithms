#include<iostream>
using namespace std;
class Node{
public :
    int data;
    Node*next;
};
Node*head;
Node*tail;
Node*temp;
Node*new_node;
void InsertatPos(){
    int pos , i=1;
    cout<<endl<<"Enter position :";
    cin>>pos;
    new_node=new Node;
    cout<<endl<<"Enter the data you wanna insert :";
    cin>>new_node->data;
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
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
    tail=NULL;
    new_node=NULL;
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
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    cout<<"Before insertion :\n";
    display();
    InsertatPos();
    cout<<"After insertion :\n";
    display();
}