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

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    //create list
    createList(head,tail);
    
    return 0;
}