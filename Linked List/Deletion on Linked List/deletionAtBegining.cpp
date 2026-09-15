/*Deletion of element at begining

Logic

1. Store the first node in a temporary pointer.
2. Move head to the second node.
3. Delete the old first node using the temporary pointer.*/

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

    cout<<"Before deleting element from starting "<<endl;
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"After deleting element from starting "<<endl;
    
    Node* temp1 = head;
    head = head->next; //moving head to next node
    delete temp1; //deleting the existing 10
    
    temp = head;//because after a previous traversal, temp is usually at NULL.
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    
    return 0;
}