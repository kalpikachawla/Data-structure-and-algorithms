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
void insertatBeg(){
    new_node=new Node;
    cout<<endl<<"Enter the data you wanna insert:";
    cin>>new_node->data;
    if(head==NULL){
        head=new_node;
        tail=new_node;
        tail->next=new_node;
    }
    else{
        new_node->next = head;
        head = new_node;
        tail->next = head;
    }
}
void display(){
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    return;
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
          if (head == NULL) {
            head = new_node;
            tail = new_node;
            tail->next = head;
        }
        else {
            tail->next = new_node;
            tail = new_node;
            tail->next = head;
        }
        cout<<"Do you wanna continue?";
        cin>>choice;
    }
    cout<<"Before inserting : \n";
    display();
    insertatBeg();
    cout<<"After inserting :\n";
    display();
}