/* Remove Duplicates from a Sorted Linked List

Logic

1. Create one pointer:
   - curr
2. Initially, curr points to the head of the linked list.
3. Compare:
   - curr->data
   - curr->next->data
4. If both values are equal:
   - Duplicate node is found.
   - Store the duplicate node in a temporary pointer.
   - Skip the duplicate node.
   - Delete the duplicate node.
   - Do NOT move curr because there may be more duplicates.
5. If both values are different:
   - Move curr to the next node.
6. Repeat until curr becomes NULL or curr->next becomes NULL.

*** Trick ***
If duplicate is found:
Delete the duplicate and stay on the same node.

If duplicate is not found:
Move curr to the next node.
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

int main(){
    
    Node* head = NULL;

    Node* first = new Node(10);
    head = first;

    Node* second = new Node(20);
    first->next = second;

    Node* third = new Node(20);
    second->next = third;

    Node* fourth = new Node(30);
    third->next = fourth;

    Node* fifth = new Node(40);
    fourth->next = fifth;

    Node* sixth = new Node(50);
    fifth->next = sixth;

    cout<<"With Duplicates: "<<endl;
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //now for duplicates
    Node* duplicate = NULL;
    Node* curr = head;

    while (curr!=NULL && curr->next != NULL)
    {
        if (curr->data==curr->next->data)
        {
            duplicate = curr->next;//storing duplicate node
            curr->next = curr->next->next;//skip duplicate node
            delete duplicate;//delete duplicate
            //don't move curr check again
        }else{
            curr = curr->next; //move to next node;
        }
        
    }

    // Print Updated List
    cout << "Without Duplicates : " << endl;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}