/*Search frequency of elements in linked list*/

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

    Node* fourth = new Node(20);
    third->next = fourth;

    Node* fifth = new Node(40);
    fourth->next = fifth;

    Node* sixth = new Node(20);
    fifth->next = sixth;

    Node* seventh = new Node(50);
    sixth->next = seventh;

    Node* eight = new Node(20);
    seventh->next = eight;

    int key;
    cout<<"Enter element to find its frequency: "<<endl;
    cin>>key;
    int count = 0;

    Node* temp = head;
    while (temp != NULL)
    {
        if(temp->data==key){
            count++;
        }
        temp = temp->next;
    }
    cout<<"Frequency: "<<count<<endl;
    
    return 0;
}