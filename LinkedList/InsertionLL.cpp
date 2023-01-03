#include<iostream>
using namespace std;

class Node{
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

void insertAfter(Node* prev,int new_data){
    if(prev==NULL){
        cout<<"can't be null";
        return;
    }

    Node* new_node= new Node();
    new_node->data=new_data;
    new_node->next=prev->next;
    prev->next=new_node;
}

void addLast(Node** head,int new_data){
    Node* new_node = new Node();
    Node *last = *head;
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head==NULL){
        *head=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
    return;
}

void printList(Node* n) {
    while(n!=NULL) {
        cout<<n->data<<" ";
        n= n->next;
    }
}

int main() {
    Node* head = NULL;
    addLast(&head,6);
    addFront(&head,8);
    addFront(&head,2);
    addLast(&head,4);
    insertAfter(head->next,5);

    printList(head);
}