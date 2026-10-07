#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node*prev;
};
Node*head;
Node*temp;
Node*new_node;
Node*tail;
void insertatEnd(){
    new_node=new Node;
    cout<<endl<<"Enter the data you wanna insert at end :";
    cin>>new_node->data;
    new_node->next=0;
    new_node->prev=tail;
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
}
void display(){
   temp=head;
   while(temp!=0){
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}
int main(){
    tail=NULL;
    head=NULL;
    new_node=NULL;
    int choice = 1;
    while(choice==1){
        new_node=new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=0;
        new_node->prev=0;
        if(head==NULL){
            tail=new_node;
            head=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
        cout<<"Do you wanna continue??";
        cin>>choice;
    }
    cout<<endl<<"Before insertion :\n";
    display();
    insertatEnd();
    cout<<endl<<"After insertion at end :\n";
    display();

}