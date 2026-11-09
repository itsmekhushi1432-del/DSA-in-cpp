/*** Insertion at End in Circular Linked List

Logic

1. Create a new node.
2. If the list is empty,
   newNode points to itself.
   head = newNode.
3. Otherwise,
   traverse to the last node.
4. last->next = newNode.
5. newNode->next = head.

Complexity

Time  : O(n)
Space : O(1)
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
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
    }
    while(temp != head);

    cout << endl;
}

// Insert at End
void insertAtEnd(Node* &head, int value)
{
    // Create new node
    Node* newNode = new Node(value);

    // If list is empty
    if(head == NULL)
    {
        newNode->next = newNode;   // points to itself
        head = newNode;
        return;
    }

    // Traverse to last node
    Node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }

    // Insert at end
    temp->next = newNode;      // last node points to new node
    newNode->next = head;      // new node points back to head
}

int main()
{
    // Manually create Circular Linked List
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    Node* head = first;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;       // make circular

    cout << "Before Insertion: ";
    display(head);

    insertAtEnd(head, 50);

    cout << "After Insertion: ";
    display(head);

    return 0;
}