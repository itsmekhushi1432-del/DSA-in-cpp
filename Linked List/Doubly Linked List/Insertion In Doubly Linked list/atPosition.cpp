/*Insert at Position in Doubly Linked List

Logic

1. Create a new node.
2. If the position is 1,
   insert at beginning.
3. Otherwise,
   create a temporary pointer.
4. Traverse to the node before
   the required position.
5. Connect the new node with the
   next node.
6. Connect the new node with the
   previous node.
7. Update the previous node's
   next pointer.
8. Update the next node's
   previous pointer.
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
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    Node *head = NULL;

    Node *first = new Node(10);
    head = first;

    Node *second = new Node(20);
    first->next = second;
    second->prev = first;

    Node *third = new Node(30);
    second->next = third;
    third->prev = second;

    Node *fourth = new Node(40);
    third->next = fourth;
    fourth->prev = third;

    Node *fifth = new Node(50);
    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Doubly Linked List Before Insertion: ";

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    int pos;
    cout << "Enter at what position you want to add node: ";
    cin >> pos;

    Node *newNode = new Node(25);
    if (head == NULL)
    {
        head = newNode;
    }
    else if (pos == 1)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next; // to save old connection
        newNode->prev = temp;
        temp->next->prev = newNode;//connect next node with the new previous node
        temp->next = newNode; // new connection
    }

    cout << "After Insertion : ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}