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
void display(){
    cout<<endl<<"Linked list :\n";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
void Detect(){
    Node*slow=head;
    Node*fast=head;
    bool loop = false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            loop=true;
            cout<<"Loop detected!";
            break;
        }
    }
    if(loop!=true){
        cout<<"No loop detected!";
        return;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    if(slow==fast){
    cout<<endl<<"The first element of loop is "<<slow->data;
        }
    Node*remove=slow;
    while(remove->next!=slow){
        remove=remove->next;
    }
    remove->next=NULL;
    display();
    return;
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
    int loopchoice;
    cout<<"Do you wanna make a loop ?";
    cin>>loopchoice;
    if(loopchoice==1 && head!=NULL &&
    head->next!=NULL && head->next->next!=NULL){
        temp->next=head->next->next;
    }
    Detect();
}