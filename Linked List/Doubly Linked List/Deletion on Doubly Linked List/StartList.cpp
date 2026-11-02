/*Delete at Beginning in Doubly Linked List

Logic
1. Check if the linked list is empty.
   If yes, nothing to delete.
2. Store the current head
   in a temporary pointer.
3. Move head to the next node.
4. If the new head exists,
   make its previous pointer NULL.
5. Delete the old first node
   using the temporary pointer.

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
    Node* tail = NULL;

    int n;
    cout<<"Enter the number of Nodes: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Enter value of Node "<<i<<":";
        cin>>x;

        Node* newNode = new Node(x);

        //first node
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        
    }

    Node* temp = head;
    cout<<"Before deletion: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //now deletion
    if (head == NULL)
    {
        cout<<"List empty. Nothing to delete"<<endl;
        return 0;
    }else{

        temp = head;//store first node
        head = head->next;//move head to next node

        if (head != NULL)
        {
            head->prev = NULL; //remove backward link
        }
        
        delete temp; //delete stored node from ram
    }

    cout<<endl;
    temp = head;
    cout<<"After Deletion: ";
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}