#include<iostream>
using namespace std;
class Node{
public :
    int data;
    Node*next;
};
int main(){
    Node*head = NULL;
    Node*temp = NULL;
    Node*new_node = NULL;
    int choice = 1;
    while(choice==1){
        new_node = new Node;
        cout<<"Enter data : ";
        cin>>new_node->data;
        new_node->next = NULL;
        if(head==NULL){
            head = new_node;
            temp=new_node;
        }
        else{
            temp->next = new_node;
            temp = new_node;
        }
        cout<<"Do you wanna continue ??";
        cin>>choice;
    }
    cout<<"Actual linked list :\n";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    temp=head;
    Node*nextNode;
    int pos,i=1;
    cout<<endl<<"Enter position :";
    cin>>pos;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next=nextNode->next;
    delete nextNode;
    cout<<endl<<"Deletion after a position performed :\n";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}