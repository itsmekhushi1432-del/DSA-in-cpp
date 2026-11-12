/*Deletion at End in Circular Linked List 
Logic:

Case 1: List is Empty
Case 2: Only One Node
Case 3: More Than One Node
1. Traverse to the second last node.
2. Store the last node.
3. Connect the second last node to the head.
4. Delete the last node.

Time Complexity : O(n)
Reason : We traverse the list to reach the second last node.

Space Complexity : O(1)
Reason : Only a few pointer variables are used.*/

#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

//create circular linked list
void createlist(Node* &head, Node* &tail){
    int n;
    cout<<"Enter size of Nodes: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Enter the value of Node "<<i<<":";
        cin>>x;

        Node* newNode = new Node(x);

        //if list is empty
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        
    }
    //connect last node with head
    if (head != NULL)
    {
        tail->next = head;
    } 
}

//print list
void displaylist(Node* head){
    Node* temp = head;

    if (head == NULL)
    {
        cout<<"Empty List..";
        return;
    }

    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head);
}

//delete node
void deleteNode(Node* &head){
    //if list is empty
    if (head == NULL)
    {
        cout<<"Empty list. Nothing to Delete...";
        return;
    }

    //if only one node
    if (head->next == head)
    {
        Node* temp = head;
        head = NULL;
        delete temp;
        return;
    }
    //more than one node
    Node* temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = head;
    delete deleteNode;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    //create list
    createlist(head,tail);

    //display list
    displaylist(head);

    //delete node
    deleteNode(head);

    //updated list
    displaylist(head);
    
    return 0;
}