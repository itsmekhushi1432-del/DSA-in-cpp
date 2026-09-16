/*Deletion of element at specific position in linked list

Overall logic

1. Traverse to the node just before the position to be deleted.
2. Store the node to be deleted in another pointer.
3. Connect the previous node to the next node of the node being deleted.
4. Delete the stored node.*/

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

    //position we want to delete element from
    int pos = 3;

    //traverse and print element before deletion
    cout<<"Element before deletion at position 3 "<<endl;
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    temp = head; //again to traverse through the list
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next; //to traverse through list
    }

    Node* deleteNode = temp->next;//currently temp is pointing to 20 and we want to delete 30 do storing 
    //30 at another temporary pointer
    temp->next = deleteNode->next; //to connect temp->next that is currently 20 with deleteNode->next that is with 40
    delete deleteNode;//to delete 30

    cout<<endl;
    cout<<"Element after deletion "<<endl;
    
    temp = head;//again for traversal through linked list
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}