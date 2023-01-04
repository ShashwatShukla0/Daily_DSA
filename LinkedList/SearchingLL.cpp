#include<iostream>
using namespace std;

class Node {
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

bool searchdirect(Node* he,int x){
    Node* current=he;
    while(current!=NULL){
        if(current->data == x){
            return true;
        }
        current=current->next;
    }
    return false;
}

bool searchrecursive(Node* he,int x) {
    if(he==NULL){
        return false;
    }
    if(he->data==x){
        return true;
    }

   return searchrecursive(he->next,x);
}

void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){
    Node* head=NULL;
    int x=53;

    push(&head,17);
    push(&head,32);
    push(&head,45);
    push(&head,21);
    push(&head,53);
    push(&head,12);
    push(&head,14);
    push(&head,43);

    printList(head);
    cout<<endl;
    searchdirect(head,x)?cout<<"Yes" : cout<<"No";
    searchrecursive(head,x)?cout<<"Yes" : cout<<"No";

    return 0;
}

