/*Insertion at End

Logic

1. Create a new node.
2. If the linked list is empty,
   make the new node the head.
3. Otherwise, create a temporary pointer.
4. Traverse until the last node.
5. Connect the last node to the new node.
6. Connect the new node back to the last node.

Complexity

Time  : O(n)
Space : O(1)
*/

#include<iostream>

using namespace std;

class Node{

    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

int main(){
    
    Node* head = NULL;

    Node* first = new Node(10);
    head = first;
    
    Node* second = new Node(20);
    first->next = second;
    second->prev = first;

    Node* third = new Node(30);
    second->next = third;
    third->prev = second;

    Node* fourth = new Node(40);
    third->next = fourth;
    fourth->prev = third;

    Node* fifth = new Node(50);
    fourth->next = fifth;
    fifth->prev = fourth;

    cout<<"Doubly Linked List Before Insertion: ";

    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
    
    Node* newNode = new Node(60);
    //check if the linked list exists or not
    if (head == NULL)
    {
        head = newNode;
    }else{
        temp = head;

        //reach last second node
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode; //connect last second with the last node
        newNode->prev = temp;
        
    }
    cout<<"Doubly Linked List After Insertion At End: ";
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}