#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
void InsertatBegnn() {
    Node* head = NULL;
    Node* new_node = new Node;
    cout << "Enter the data you want to insert: ";
    cin >> new_node->data;
    new_node->next = head;
    head = new_node;
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    InsertatBegnn();
}