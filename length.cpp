#include<iostream>
using namespace std;
class Node{
public :
    int data;
    Node*next;
};
int main(){
    Node*head=NULL;
    Node*temp=NULL;
    Node*new_node=NULL;
    int choice = 1;
    while(choice==1){
        new_node = new Node;
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
        cout<<"Do you wanna continue ??";
        cin>>choice;
    }
    int count=0;
    temp=head;
    if(head==0){
        cout<<"Linked list is empty";
    }
    else{
        while(temp!=0){
            count++;
            temp=temp->next;
        }
    }
    cout<<"Length is : "<<count;
}