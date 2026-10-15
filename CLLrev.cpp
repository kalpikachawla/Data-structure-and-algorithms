#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*temp;
Node*tail;
Node*new_node;
void reverse(){
    Node*prev;
    Node*nextNode;
    temp=head;
    prev=tail;
    nextNode=temp->next;
    if(head==NULL || head==tail){
        return;
    }
   do{
    nextNode = temp->next;
    temp->next = prev;
    prev = temp;
    temp = nextNode;
    } while (temp != head);
    tail = head;
    head = prev;
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
        new_node= new Node;
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
    cout<<"Before reversing :\n";
    display();
    reverse();
    cout<<endl<<"After reversing :\n";
    display();
}