/*Insertion of element at the end of linked list*/

#include<iostream>

using namespace std;
/*Insertion at End Logic

Create a new node with the required value.
Start from the head pointer.
Traverse the linked list until you reach the last node (temp->next == NULL).
Connect the last node to the new node using:*/
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
    first->next = second;

    Node* third = new Node(30);
    second->next = third;

    Node* fourth = new Node(40);
    third->next = fourth;

    Node* newNode = new Node(50);

    /*while(temp != NULL)
    → Used when we want to visit every node of the linked list.

    while(temp->next != NULL)
    → Used when we want to stop at the last node of the linked list.*/
    
    //traverse through linked list
    Node* temp = head;
    while (temp->next != NULL) //traverse till last node
    {
        temp = temp->next;
    }
    temp->next = newNode;

    //to print the element of linked list
    Node* print = head;

    while(print != NULL)
    {
        cout << print->data << " ";
        print = print->next;
    }
    
    return 0;
}