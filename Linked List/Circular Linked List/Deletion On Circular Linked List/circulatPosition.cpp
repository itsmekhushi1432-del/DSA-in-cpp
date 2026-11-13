/*Deletion at Specific Position in Circular Linked List

Logic:

Case 1: Invalid Position
Case 2: Empty List
Case 3: Only One Node
Case 4: Position = 1
1. Find the last node.
2. Store the first node.
3. Move head to the next node.
4. Connect the last node to the new head.
5. Delete the old head.

Case 5: Position > 1
1. Traverse to the node before the required position.
2. Check whether the position exists.
3. Store the node to be deleted.
4. Connect the previous node to the next node.
5. Delete the required node.

Time Complexity : O(n)
Reason : Traversing the list may require visiting all nodes.

Space Complexity : O(1)
Reason : Only a few pointer variables are used.*/

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// create linked list
void createlist(Node *&head, Node *&tail)
{
    int n;
    cout << "Enter size of Node: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter the value of Node " << i << ":";
        cin >> x;

        Node *newNode = new Node(x);

        // if list is empty
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // connect last node to head
    if (head != NULL)
    {
        tail->next = head;
    }
}

// print list
void displaylist(Node *head)
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "Empty List..";
        return;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

// delete node
void deleteNode(Node *&head, int idx)
{
    // invalid position
    if (idx <= 0)
    {
        cout << "Invalid Position...";
        return;
    }

    // empty list
    if (head == NULL)
    {
        cout << "List Empty. Nothing to delete..";
        return;
    }

    // only one node
    if (head->next == head)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
        return;
    }

    // pos == 1
    if (idx == 1)
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        Node *deleteNode = head; // store the node
        head = head->next;       // move head
        temp->next = head;       // connect last node with head
        delete deleteNode;       // delete node
        return;
    }

    // for pos>1
    //** for pos > 1 **
    Node *temp = head;

    for (int i = 1; i < idx - 1; i++)
    {
        //** position out of range **
        if (temp->next == head)
        {
            cout << "Position Out of Range...";
            return;
        }

        temp = temp->next;
    }

    //** if position is beyond the last node **
    if (temp->next == head)
    {
        cout << "Position Out of Range...";
        return;
    }

    //** store the node to be deleted **
    Node *deleteNode = temp->next;

    //** connect previous node with next node **
    temp->next = deleteNode->next;

    //** delete the required node **
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // create list
    createlist(head, tail);

    // display list
    displaylist(head);

    // deletion value and index
    int idx;
    cout << "Enter index whose value is to deleted: ";
    cin >> idx;

    // delete node
    deleteNode(head, idx);

    // updated list
    displaylist(head);

    return 0;
}