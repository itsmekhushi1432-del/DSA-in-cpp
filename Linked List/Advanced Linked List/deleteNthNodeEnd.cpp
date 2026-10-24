/*** Delete Nth Node from the End of a Linked List
Logic

1. Create two pointers:
   - Slow
   - Fast
2. Initially, both point to the head of the linked list.
3. Move Fast pointer 'n' steps ahead.
4. If Fast becomes NULL after moving 'n' steps,
   it means the head node has to be deleted.
5. Otherwise, move both Slow and Fast one step at a time
   until Fast->next becomes NULL.
6. Now Slow will be just before the node
   that needs to be deleted.
7. Store the node to be deleted in a temporary pointer.
8. Change the link to skip the node.
9. Delete the node.

*** Trick ***
Fast stays 'n' nodes ahead of Slow.

When Fast reaches the last node,
Slow reaches one node before the node to delete.
*/

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    // Creating Linked List

    Node* head = NULL;

    Node* first = new Node(10);
    head = first;

    Node* second = new Node(20);
    first->next = second;

    Node* third = new Node(30);
    second->next = third;

    Node* fourth = new Node(40);
    third->next = fourth;

    Node* fifth = new Node(50);
    fourth->next = fifth;

    Node* sixth = new Node(60);
    fifth->next = sixth;

    cout << "Original List : " << endl;

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    int n = 2;

    Node* slow = head;
    Node* fast = head;

    // Move Fast n steps ahead

    for(int i = 1; i <= n; i++)
    {
        if(fast == NULL)
        {
            cout << "Invalid Position";
            return 0;
        }

        fast = fast->next;
    }

    //special case :- head node
    // Delete Head Node

    if(fast == NULL)
    {
        Node* del = head;
        head = head->next;
        delete del;
    }

    else
    {
        // Move both pointers

        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // Delete Nth node

        Node* del = slow->next; //one node before the actual that we want to delete

        slow->next = slow->next->next; //link previous to the deletion one's next

        delete del; //delete the node
    }

    cout << "Updated List : " << endl;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}