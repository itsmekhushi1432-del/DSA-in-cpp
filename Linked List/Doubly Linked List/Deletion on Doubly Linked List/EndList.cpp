/*Delete at End in Doubly Linked List

Logic

1. Check if the linked list is empty.
   If yes, nothing to delete.
2. Create a temporary pointer and move it to the last node.
3. If the linked list has only one node,
   delete that node and make head NULL.
4. Otherwise, move one node back using the prev pointer.
5. Disconnect the last node by setting
   the previous node's next pointer to NULL.
6. Delete the last node using the temporary pointer.

Complexity

Time  : O(n)
Space : O(1)*/
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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter value of Node " << i << ": ";
        cin >> x;

        Node* newNode = new Node(x);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    cout << "Before Deletion: ";
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    if (head == NULL)
    {
        cout << "List empty. Nothing to delete";
        return 0;
    }

    temp = head;

    //move to last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    //case if only 1 node is present
    if (temp == head)
    {
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else
    {
        temp->prev->next = NULL;
        tail = temp->prev;
        delete temp;
    }

    cout << "After Deletion: ";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}