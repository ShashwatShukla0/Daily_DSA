#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class LinkedList{
    Node* head=NULL;
  public:


    void reverse(){
        Node* current=NULL;
        Node* prev=NULL, *next=NULL;

        while(current!=NULL) {
            next = current->next;
            current->next=prev;

            prev=current;
            current=next;

        }
    }
      void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node();
        temp->next = head;
        head = temp;
    }
    
};

int main(){
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}
