/*Reversing a linked list
Require 3 pointers

These three pointers let us:

Remember the previous node (prev).
Know the current node (curr).
Save the next node (next) before changing any links.

**Before changing curr->next, always save curr->next in another pointer.
Otherwise, you will lose the remaining linked list.**

prev  = "I finished this node."
curr  = "I'm working on this node."
next  = "I'll work on this node next."*/

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

    //print element brfore reversing
    cout<<"Before Reversing List : "<<endl;
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //creation of three new pointers
    Node* prev = NULL;//curently pointing to null before 10 do we have any node --> No

   // curr stores the current node on which we are performing the reverse operation. Initially, it 
   //starts from the head of the linked list.
    Node* curr = head;//current node as we only start our work from head

    Node* next = NULL;//Because we haven't started the reverse process yet.We don't know which node we want to save.
    //next is used to temporarily store the address of the next node before changing any links. Initially, it points to NULL.

    while (curr!=NULL)
    {
        next = curr->next; //to save next node
        curr->next = prev; //to reverse or change arrow direction
        prev = curr;//for firdt iteration 10 will became prev for next node
        curr = next;// Move curr one step ahead
    }
    head = prev;//New head becomes last node
    
    
    //after reversing
    cout<<endl;
    cout<<"After Reversing List : "<<endl;
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    

    
    return 0;
}