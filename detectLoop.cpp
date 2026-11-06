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
void Detect(){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"Loop detected!";
            return;
        }
    }
    cout<<"No loop detected!";
    return;
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
    int loopChoice;
    cout<<"Do you wanna make a loop?";
    cin>>loopChoice;
    if(loopChoice==1 && head!=NULL &&
   head->next!=NULL && head->next->next!=NULL){
    temp->next = head->next->next;
 }
    Detect();
}