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
void findinLast(){
    if(head==NULL){
        cout<<"Empty list";
        return;
    }
    temp=head;
    int pos=1, lastpos=-1;
    int target;
    cout<<endl<<"Enter target :";
    cin>>target;
    while(temp!=NULL){
        if(temp->data==target){
            lastpos=pos;
        }
        temp=temp->next;
        pos++;
    }
    if(lastpos==-1){
        cout<<"No element found";
    }
    else{
        cout<<"Last occurence at position : "<<lastpos;
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
    new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node= new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=0;
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
    display();
    findinLast();
}