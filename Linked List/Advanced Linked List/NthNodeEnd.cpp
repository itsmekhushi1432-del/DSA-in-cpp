/*** Find the Nth Node from the End of a Linked List

Logic

1. Create two pointers:
   - Slow
   - Fast
2. Initially, both point to the head of the linked list.
3. Move Fast pointer 'n' steps ahead.
4. Now move both Slow and Fast one step at a time.
5. Repeat until Fast becomes NULL.
6. When Fast becomes NULL,
   Slow will point to the Nth node from the end.

*** Trick ***
Keep a gap of 'n' nodes between Slow and Fast.

When Fast reaches the end,
Slow automatically reaches the Nth node from the end.
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

    // Print Linked List

    cout << "Linked List : " << endl;

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Find Nth Node from End

    int n = 2;

    Node* slow = head;
    Node* fast = head;

    // Move Fast pointer n steps ahead

    for(int i = 1; i <= n; i++)
    {
        if(fast == NULL)
        {
            cout << "Invalid Position";
            return 0;
        }

        fast = fast->next;
    }

    /*The for loop creates the gap, and the while loop maintains the gap until Fast reaches 
    the end. Then Slow is automatically at the required node.*/
    // Move both pointers together

    while(fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Print Answer

    cout << n << "th Node from End : " << slow->data << endl;

    return 0;
}