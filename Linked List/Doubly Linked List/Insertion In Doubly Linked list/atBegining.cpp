/*Insertion at begining

Logic

1. Create a new node.
2. Make the new node point to the current head.
3. Make the current head point back to the new node.
4. Update head to the new node.

Complexity
Time  : O(1)
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
    head = first; //head is moved to new first node now

    Node* second = new Node(20);
    first->next = second;
    second->prev = first;

    Node* third =  new Node(30);
    second->next = third;
    third->prev = second;

    Node* fourth = new Node(40);
    third->next = fourth;
    fourth->prev = third;

    Node* fifth = new Node(50);
    fourth->next = fifth;
    fifth->prev = fourth;

    cout<<"Doubly Linked List Before Insertion:  ";
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    Node* newNode = new Node(5); //new node to be inserted
    if (head == NULL) //empty linked list
    {
        head = newNode; //first node;
    }else{

        newNode->next = head;//connection with existing linked list
        head->prev = newNode;//backward connection
        head = newNode;//moving head to first node
    }
    
    cout<<"Doubly Linked List After Insertion: ";
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}