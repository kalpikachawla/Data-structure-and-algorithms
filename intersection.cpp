#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head1;
Node*temp1;
Node*new_node1;
Node*head2;
Node*temp2;
Node*new_node2;
void Intersection(){
    Node*p1=head1;
    Node*p2=head2;
    while(p1!=p2){
        if(p1==NULL){
            p1=head2;
        }
        else{
            p1=p1->next;
        }
        if(p2==NULL){
            p2=head1;
        }
        else{
            p2=p2->next;
        }
    }
    if(p1==NULL){
        cout<<endl<<"No intersection found ";
    }
    else{
        cout<<endl<<"Intersection found at "<<p1->data;
    }
    return;
}
void display(){
    cout<<endl<<"1st linked list :\n";
    temp1=head1;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl<<endl<<"2nd linked list :\n";
    temp2=head2;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    return;
}
int main(){
    head1=NULL;
    temp1=NULL;
    new_node1=NULL;
    head2=NULL;
    temp2=NULL;
    new_node2=NULL;
    int choice=1;
    cout<<"Enter data of 1st LL\n";
    while(choice==1){
        new_node1=new Node;
        cout<<"Enter data :";
        cin>>new_node1->data;
        new_node1->next=NULL;
        if(head1==NULL){
            temp1=new_node1;
            head1=new_node1;
        }
        else{
            temp1->next=new_node1;
            temp1=new_node1;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    cout<<endl<<endl<<"Enter data of 2nd LL\n";
    int choice2=1;
    while(choice2==1){
        new_node2=new Node;
        cout<<"Enter data :";
        cin>>new_node2->data;
        new_node2->next=NULL;
        if(head2==NULL){
            temp2=new_node2;
            head2=new_node2;
        }
        else{
            temp2->next=new_node2;
            temp2=new_node2;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice2;
    }
    temp2->next=head1->next->next;
    Intersection();
}