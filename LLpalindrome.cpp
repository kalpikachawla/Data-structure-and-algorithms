#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*head;
Node*temp;
Node*new_node;
bool Palindrome(vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e=n-1;
    while(s<e){
        if(arr[s]==arr[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    head=NULL;
    temp=NULL;
    new_node=NULL;
    int choice=1;
    while(choice==1){
        new_node=new Node;
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
    vector<int>arr;
    temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    bool yes=Palindrome(arr);
    if(yes==true){
        cout<<"It is a palindrome!";
    }
    else{
        cout<<"It is not a palindrome!";
    }
}