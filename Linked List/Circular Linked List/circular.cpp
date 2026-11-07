/*A Circular Linked List is a linked list in which the last node points back to the first node 
instead of NULL.

Creating a list dynamically (user input or loop) → head + tail is the easiest and most efficient 
approach.

If you need quick access to the last node, keep a tail pointer. Otherwise, head alone is enough.*/

#include<iostream>

using namespace std;

//using struct
class Node
{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cout<<"Enter number of Nodes: ";
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

    //connecting last node with head to make it circular list
    if (head != NULL)
    {
        tail->next = head;
    }

    //checking if list is empty
    if (head == NULL)
    {
        cout<<"Empty List...";
        return 0;
    }
    
    //printing of the linked list
    Node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    } while(temp != head);
    
    return 0;
}