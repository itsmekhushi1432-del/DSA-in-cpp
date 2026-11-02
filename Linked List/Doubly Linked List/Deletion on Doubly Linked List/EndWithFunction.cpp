#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Function to create doubly linked list using user input
void createList(Node* &head, Node* &tail)
{
    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter value of Node " << i << ": ";
        cin >> x;

        Node* newNode = new Node(x);// Create new node

        if(head == NULL)
        {
            head = newNode;// First node becomes head
            tail = newNode; // First node also becomes tail
        }
        else
        {
            tail->next = newNode;// Connect old tail to new node
            newNode->prev = tail;// Connect new node back to old tail
            tail = newNode;      // Move tail to new node
        }
    }
}

// Function to print the list
void printList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;// Move forward
    }
}

// Function to delete node at end
void deleteAtEnd(Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        cout << "List empty. Nothing to delete" << endl;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)// Reach last node
    {
        temp = temp->next;
    }

    if(temp == head)// Only one node in list
    {
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else
    {
        temp->prev->next = NULL;// Disconnect last node from previous node
        tail = temp->prev;// Move tail to previous node
        delete temp;// Delete old last node
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    createList(head, tail);

    cout << "Before Deletion: ";
    printList(head);
    cout << endl;

    deleteAtEnd(head, tail);

    cout << "After Deletion: ";
    printList(head);
    cout << endl;

    return 0;
}