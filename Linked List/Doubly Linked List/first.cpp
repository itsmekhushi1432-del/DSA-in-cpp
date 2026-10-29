/*Doubly Linked List ---> can move both backward and forward
have 
-->prev,data,next
-->need to connect both sides

Create a double linked list
*/


/*Complexity

Time  : O(n)
Space : O(n)*/

#include<iostream>

using namespace std;

class Node{
    public:

        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data =  value;
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

    Node* third =  new Node(30);
    second->next = third;
    third->prev = second;

    Node* fourth = new Node(40);
    third->next = fourth;
    fourth->prev = third;

    Node* fifth = new Node(50);
    fourth->next = fifth;
    fifth->prev = fourth;

    cout<<"Doubly Linked List....."<<endl;

    //forward traversal
    cout<<"Forward Traversal-------->";

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //Backward Traversal
    /*Find last node then start printing from last using prev pointer
    */
    cout<<"Backward Traversal------->";
    temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    //now temp is exactly at last node 
    // traverse backward using prev pointer
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;//move backward
    }
    
    return 0;
}