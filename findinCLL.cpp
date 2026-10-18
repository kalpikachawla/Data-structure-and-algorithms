#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*tail;
Node*new_node;
Node*temp;
void found(){
    int target;
    cout<<endl<<"Enter target ";
    cin>>target;
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    temp=head;
    do{
        if(temp->data==target){
            cout<<"Element found";
            return;
        }
        temp=temp->next;
    }while(temp!=head);
    cout<<"No element found";
}
void display(){
    tail=head;
    while(tail->next!=head){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<tail->data;
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
            tail=new_node;
            head=new_node;
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
    display();
    found();
}