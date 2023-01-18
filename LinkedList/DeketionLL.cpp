#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void addFront(Node** head,int new_data) {
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}

void deleteBegin( Node** head) {
    Node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteLast( Node** head){
    Node* new_node = new Node();
    Node* end = (*head);
    Node* prev = NULL;

    while(end->next) {
        prev = end;
        end = end->next;
    }
    prev->next=NULL;
    free(end);
}

void printList(Node* n) {
    while(n!=NULL) {
        cout<<n->data<<" ";
        n= n->next;
    }
    cout<<endl;
}

int main() {

    Node* head = NULL;

    addFront(&head,5);
    addFront(&head,6);
    addFront(&head,7);
    addFront(&head,8);
    addFront(&head,2);
    addFront(&head,3);
    addFront(&head,4);
    addFront(&head,1);
    addFront(&head,9);

    printList(head);

    deleteBegin(&head);
    
    cout<<"AFter deletion from begin: "<<endl;
    printList(head);

    cout<<"After deletion from end: "<<endl;
    deleteLast(&head);
    printList(head);

    
}