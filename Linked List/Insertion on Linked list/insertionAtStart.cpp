/*Insertion of element at starting of the linked list*/

#include<iostream>

using namespace std;
 /* Overall logic 
 create a new node that we want to insert then connect it with head using newNode->next = head
 and then assign head = newnode 
 
 1. Create a new node.
2. Store the value in the new node.
3. Make the new node point to the current head.
4. Move the head to the new node.*/
class Node{

    public:
        int data;
        Node* next;

        //constructor
        Node(int value){
            data = value;
            next = NULL;
        }

};

int main(){
    
    Node* head = NULL;

    Node* first = new Node(10);
    head = first;

    Node* second = new Node(20);
    first -> next = second;

    Node* third = new Node(30);
    second -> next = third;

    Node* fourth = new Node(40);
    third -> next = fourth;

     //insertion of 5 at begining
    Node* newNode = new Node(5);
    newNode->next = head; //connecting the newNode with existing linked list
    head = newNode; //moving the head to second

    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;//to traverse through linked list
    }
    
    return 0;
}