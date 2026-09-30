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
        cout<<"Enter data ";
        cin>>new_node->data;
        new_node->next=NULL;
        if (head == NULL) {
            head = new_node;
            temp = new_node;
        }
        else {
            temp->next = new_node;
            temp = new_node;
        }
        cout<<"do you want to continue(1/0)";
        cin>>choice;
    }
      temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}