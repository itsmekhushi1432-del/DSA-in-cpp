/*A Circular Linked List is a linked list in which the last node points back to the first node instead of NULL.
*/

#include<iostream>

using namespace std;

//using struct
struct Node
{
    int data;
    Node* next;
};

int main(){
    
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    Node* head = first;

    first->data = 10;
    first->next = second;

    second ->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = head;

    Node* temp = head;
    /* while (temp!=NULL)  can not use this as temp never became null it will be infinite loop
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } */
    
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    

    

    return 0;
}