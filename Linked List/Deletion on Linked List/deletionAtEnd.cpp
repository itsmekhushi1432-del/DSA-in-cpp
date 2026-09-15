/*Deletion of element at the end of linked list

Overall logic 
1. Traverse until the second-last node.
2. Store the last node in another pointer.
3. Make the second-last node point to NULL.
4. Delete the last node.*/

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

    cout<<"element before deletion fron end "<<endl;
    Node* temp = head; //temp pointer pointing to head
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
    cout<<"After deleting element from end "<<endl;

    temp = head;
    while (temp->next->next!=NULL) // Traverse until the second-last node
    {
        temp = temp->next ;//to traverse through list
    }
    //so when temp->next->next became = 40->50->NULL it will stop here as we wanted
    Node* last = temp->next; //currently the loop stop at 40 so temp is currently pointing to 40 and we want to
    //delete its next element so we store temp->next i.e 50 into last named pointer

    temp->next = NULL; //to make the last node that is 40 now point to null 
    delete last;//deleting our last element that was stored in last pointer

    temp = head;//again to traverse through list
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}