/* Deletion at Beginning in Circular Linked List

Logic:

1. Check whether the list is empty.
2. If there is only one node:
      - Delete the node.
      - Set head = NULL.
3. Otherwise:
      - Store the first node.
      - Find the last node.
      - Move head to the next node.
      - Update last->next = head.
      - Delete the old head.

Time Complexity  : O(n)
Reason : We traverse the list to reach the last node.

Space Complexity : O(1)
Reason : Only a few pointer variables are used.
*/

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

//create list
void createList(Node* &head, Node* &tail){
    int n;
    cout<<"Enter size of Nodes: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Enter value of Node "<<i<<":";
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
    
}

//print
void displayList(Node* head){
    Node* temp = head;
    if (head == NULL)
    {
        cout<<"List Empty....";
        return;
    }
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head);
}

//delete node
void deleteList(Node* &head){
    
    //if list is empty
    if (head == NULL)
    {
        cout<<"List Empty....Nothing to delete";
        return;
    }

    //if only 1 node is present
    if (head->next == head)
    {
        Node* temp = head;
        head = NULL;
        delete temp;
        return;
    }

    //for more than 1 node
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head;
    delete temp;
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    //create list
    createList(head,tail);

    //print list
    displayList(head);

    //delete
    deleteList(head);

    //print updated list
    displayList(head);
    
    return 0;
}