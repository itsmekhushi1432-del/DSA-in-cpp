/*1. Detect the loop using Floyd's Cycle Detection.
2. If no loop exists,
   return NULL.
3. If Slow and Fast meet,
   keep one pointer at the meeting point.
4. Move another pointer to the head.
5. Move both pointers one step at a time.
6. The node where both pointers meet again
   is the starting node of the loop.

************* Trick *************

First meeting ≠ Starting node
Reset one pointer to head.
Move both one step.
Second meeting = Starting node.

Complexity	Value
Time	O(n)
Space	O(1)*/

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

int main()
{
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

    // Create Loop
    fifth->next = third;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            break;
        }
    }

    if(fast == NULL || fast->next == NULL)
    {
        cout << "No Loop Found";
        return 0;
    }

    fast = head;

    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Starting Node of Loop : " << slow->data;

    return 0;
}