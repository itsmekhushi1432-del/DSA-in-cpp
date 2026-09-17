/*Insertion at begining of circular linked list

1. Create a new node.
2. Store the current head in newNode->next.
3. Traverse to the last node.
4. last->next = newNode.
5. head = newNode.*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Display Circular Linked List
void display(Node* head)
{
    if(head == NULL)
    {
        cout << "List is Empty";
        return;
    }

    Node* temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while(temp != head);

    cout << endl;
}

// Insertion at Beginning
void insertAtBeginning(Node* &head, int value)
{
    // Create new node
    Node* newNode = new Node;

    newNode->data = value;

    // If list is empty
    if(head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    // Find the last node
    Node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }

    // Insert at beginning
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

int main()
{
    // Creating Circular Linked List
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    Node* head = first;

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = head;   // Make it Circular

    cout << "Before Insertion:\n";
    display(head);

    insertAtBeginning(head, 5);

    cout << "\nAfter Insertion:\n";
    display(head);

    return 0;
}