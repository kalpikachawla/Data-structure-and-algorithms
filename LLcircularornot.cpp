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
bool check(){
    if(head==NULL){
        return false;
    }
    else if(head->next==NULL){
        return false;
    }
    else{
        temp=head->next;
        while(temp!=NULL && temp!=head){
            temp=temp->next;
        }
        if(temp==NULL){
            return false;
        }
        if(temp==head){
            return true;
        }
    }
    return false;
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
    new_node=NULL;
    tail=NULL;
    int choice = 1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=NULL;
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
    display();
    bool answer = check();
    cout<<endl<<answer;
}