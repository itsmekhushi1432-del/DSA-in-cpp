/*** Insertion at Specific Position in Circular Linked List

Logic

1. Create a new node.
2. If position is 1,
   insert at beginning.
3. Otherwise, traverse to the node before the required position.
4. Connect the new node with the next node.
5. Connect the previous node with the new node.

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

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// list creation
void createList(Node *&head, Node *&tail)
{

    int n;
    cout << "Enter size of Nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter value of Node " << i << ":";
        cin >> x;

        Node *newNode = new Node(x);

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
    // connecting last node with head
    if (head != NULL)
    {
        tail->next = head;
    }
}

// display linked list
void displayList(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List Empty...";
        return;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

void insertionPosition(Node *&head, int value, int idx)
{
    // Case 1 : Invalid Position
    if (idx <= 0)
    {
        cout << "Invalid Position...";
        return;
    }

    // Create New Node
    Node *newNode = new Node(value);

    // Case 2 : Empty List
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    // Case 3 : Insert at Beginning
    if (idx == 1)
    {
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;
        head = newNode;

        return;
    }

    // Case 4 : Traverse to Previous Node
    Node *temp = head;

    for (int i = 1; i < idx - 1; i++)
    {
        /*Check whether the next node is the head.
    If yes, then the current node is the last node.
    If we are still searching for the required position but we've already reached the last node, then:- the required position doesn't exist,
    - so print "Position Out of Range",
    - delete the newly created node,
    - and stop the function.*/
        if (temp->next == head)
        {
            cout << "Position Out of Range...";
            delete newNode;
            return;
        }

        temp = temp->next;
    }

    // Case 5 : Insertion
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    // create list
    createList(head, tail);

    // print list
    displayList(head);

    // value to be inserted
    cout << endl;
    int value;
    cout << "Enter the value to be inserted:";
    cin >> value;

    int idx;
    cout << "Enter index at which value is to insert: ";
    cin >> idx;

    // insertion
    insertionPosition(head, value, idx);

    // display list
    displayList(head);

    return 0;
}