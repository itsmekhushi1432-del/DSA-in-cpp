/*Finding the middle node of linked list (slow & fast pointer)
Forms the base for Merge Sort on Linked Lists


To find the middle node in one traversal:

1. Create two pointers:
   - Slow
   - Fast

2. Initially, both point to the head.

3. Move:
   - Slow by 1 node.
   - Fast by 2 nodes.

4. When Fast reaches the end (or cannot move further),
   Slow will be at the middle node.
   This is called the Slow and Fast Pointer Technique (also called the Tortoise and Hare Algorithm)
   */

   #include<iostream>
   
   using namespace std;
   
   class Node{
    public:
        int data;
        Node* next;

        //constructor
        Node(int value){
            data = value;
            next = NULL;
        }

   };

   int main(){

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

    //traversing through list
    /* Node* temp = head; */
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<"Middle Node: "<<slow->data<<" ";
    return 0;
   }
