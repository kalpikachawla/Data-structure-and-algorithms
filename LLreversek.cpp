#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*new_node;
Node*temp;
Node* reverseK(Node*head , int k){
    Node*forward=NULL;
    Node*curr = head;
    Node*prev=NULL;
    int count = 0;
    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reverseK(forward,k);
    }
    return prev;
}
void display(){
    temp=head;
    while(temp!=NULL){
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
    int k;
    cout<<"Enter k :";
    cin>>k;
    cout<<"Before reversing :\n";
    display();
    head=reverseK(head,k);
    cout<<endl<<"After reversing :\n";
    display();
}