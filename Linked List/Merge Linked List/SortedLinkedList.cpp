/*Merging two sorted linked list

Logic

1. Create two pointers, one for each linked list.
2. Compare the current nodes of both lists.
3. Add the smaller node to the merged linked list.
4. Move the pointer of the list from which the node was taken.
5. Repeat until one of the linked lists becomes NULL.
6. Attach the remaining nodes of the other linked list.

***Only move the pointer of the list from which you took the node.****
*/

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    // --------- First Linked List --------->

    Node* head1 = NULL;

    Node* first1 = new Node(10);
    head1 = first1;

    Node* second1 = new Node(30);
    first1->next = second1;

    Node* third1 = new Node(50);
    second1->next = third1;

    // --------- Second Linked List ---------

    Node* head2 = NULL;

    Node* first2 = new Node(20);
    head2 = first2;

    Node* second2 = new Node(40);
    first2->next = second2;

    Node* third2 = new Node(60);
    second2->next = third2;

    // --------- Merged List ---------

    //both these pointer belongs to the merged list
    Node* head = NULL; //to access the merged linked list
    Node* tail = NULL; //last node of the merged linked list

    // If first list is empty
    if(head1 == NULL)
    {
        head = head2;
    }

    // If second list is empty
    else if(head2 == NULL)
    {
        head = head1;
    }

    else
    {
        // Decide first node of merged list

        if(head1->data < head2->data) //for first 10<20
        {
            head = head1; //making the merged list head point to the first node of list 1
            tail = head1; //both poinitng to same node because currently it has only 1 node that is first and last both
            head1 = head1->next; //moving the head1 pointer to next node
        }
        else
        {
            head = head2;
            tail = head2;
            head2 = head2->next;
        }

        // Merge remaining nodes

        //"Do both linked lists still have nodes left to compare?"
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->data < head2->data)
            {
                tail->next = head1;
                tail = head1;
                head1 = head1->next;
            }
            else
            {
                tail->next = head2; //change tails pointer
                tail = head2; // move the tail
                head2 = head2->next;
            }
        }

        // Attach remaining nodes {merge remaining node}

        if(head1 != NULL)
        {
            tail->next = head1;
        }

        if(head2 != NULL)
        {
            tail->next = head2;
        }
    }

    // --------- Print Merged List ---------

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}