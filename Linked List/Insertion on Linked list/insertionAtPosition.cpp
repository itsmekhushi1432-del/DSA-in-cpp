/*Insertion of element at any position in linked list*/

#include<iostream>

using namespace std;
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

    // Position where we want to insert
    int position = 3;

    // New node
    Node* newNode = new Node(25);

    // Traverse to (position - 1)th node
    Node* temp = head;

    for(int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    // Insertion
    newNode->next = temp->next; //to connect 25 with 30 the forward element
    temp->next = newNode; //to connect 25 in linked list with previous element

    // Print Linked List
    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }


    return 0;
}