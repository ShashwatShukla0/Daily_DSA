#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head,int newData){
    Node* new_node= new Node();
    new_node->data=newData;
    new_node->next=(*head);
    (*head)=new_node;
}

void reverse( Node** head_ref){
    Node* temp = NULL;
    Node* prev = NULL;
    Node* curr = (*head_ref);

    while(curr!= NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    (*head_ref) = prev;
}

void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){
    Node* head = NULL;
    
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,85);
 
    cout << "Given linked list\n";
    printList(head);
 
    reverse(&head);
 
    cout << "\nReversed linked list \n";
    printList(head);
    return 0;
}
