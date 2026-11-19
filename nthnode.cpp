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
Node*nthNode(Node*head,int n){
    Node*slow=head;
    Node*fast=head;
    for(int i=0; i<n; i++){
        if(fast==NULL){
            return NULL;
        }
        fast=fast->next;
    }
   while(fast!=NULL){
    slow=slow->next;
    fast=fast->next;
   }
   return slow; 
}
int main(){
    head=temp=new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node= new Node;
        cout<<"Enter data :";
        cin>>new_node->data;
        new_node->next=NULL;
        if(head==NULL){
            temp=new_node;
            head=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    int n;
    cout<<"Enter n :";
    cin>>n;
    Node*ans=nthNode(head,n);
    cout<<ans->data;
}