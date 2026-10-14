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
int  Middle(){
    Node*start;
    Node*last;
    start = head;
    last = head;
    while(last!=NULL && last->next!=NULL){
        start=start->next;
        last=last->next->next;
    }
    return start->data;
}
void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    head = NULL;
    temp = NULL;
    new_node = NULL;
    int choice = 1;
    while(choice==1){
        new_node= new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next = 0;
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
    display();
    cout<<endl<<"Your middle node is :\n"<<Middle();
    
}