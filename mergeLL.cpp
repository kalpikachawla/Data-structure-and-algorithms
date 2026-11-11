#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head1;
Node*head2;
Node*temp1;
Node*temp2;
Node*new_node1;
Node*new_node2;
Node*head3;
Node*tail;
Node*merge(Node*head1, Node*head2){
    head3=NULL;
    tail=NULL;
    Node*selected;
    while(head1!=NULL && head2!=NULL){
        if(head1->data > head2->data){
            selected=head2;
            head2=head2->next;
        }
        else{
            selected=head1;
            head1=head1->next;
        }
        if(head3==NULL){
            head3=selected;
            tail=selected;
        }
        else{
            tail->next=selected;
            tail=selected;
        }
}
    if(head3 == NULL){
    head3 = (head1 != NULL) ? head1 : head2;
}
else if(head1 != NULL){
    tail->next = head1;
}
else if(head2 != NULL){
    tail->next = head2;
}
return head3;
}
void display(){
    Node*temp3=head3;
   while(temp3!=NULL){
    cout<<temp3->data<<" ";
    temp3 = temp3->next;
   }    
}
int main(){
    head1=NULL;
    head2=NULL;
    temp1=NULL;
    temp2=NULL;
    new_node1=NULL;
    new_node2=NULL;
    int choice=1;
    cout<<"Enter data of 1st LL :\n";
    while(choice==1){
        new_node1=new Node;
        cout<<"Enter data :";
        cin>>new_node1->data;
        new_node1->next=NULL;
        if(head1==NULL){
            head1=new_node1;
            temp1=new_node1;
        }
        else{
            temp1->next=new_node1;
            temp1=new_node1;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice;
    }
    cout<<endl<<"Enter data of 2nd LL :\n";
    int choice2=1;
    while(choice2==1){
        new_node2=new Node;
        cout<<"Enter data :";
        cin>>new_node2->data;
        new_node2->next=NULL;
        if(head2==NULL){
            head2=new_node2;
            temp2=new_node2;
        }
        else{
            temp2->next=new_node2;
            temp2=new_node2;
        }
        cout<<"Do you wanna continue ?";
        cin>>choice2;
    }
    head3 = merge(head1, head2);
    display();
}