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
Node* deleteNode(Node* head, int key){
    if(head == NULL){
        return head;
    }
    if(head->data == key){
        Node* del = head;
        head = head->next;
        delete del;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == key){
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
            return head;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
void print(){
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}
int main(){
    head=temp=new_node=NULL;
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
    int key;
    cout<<endl<<"Enter key :";
    cin>>key;
    deleteNode(head,key);
    print();
}