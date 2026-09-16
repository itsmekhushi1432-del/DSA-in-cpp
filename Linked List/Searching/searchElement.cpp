/* Program to search an element in linked list*/
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
    first ->next = second;

    Node* third = new Node(30);
    second ->next = third;

    Node* fourth = new Node(40);
    third ->next = fourth;

    Node* fifth = new Node(50);
    fourth ->next = fifth;

    Node* sixth = new Node(60);
    fifth ->next = sixth;

    int key;
    cout<<"Enter element to search: "<<endl;
    cin>>key;
    bool found = false;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data==key){
            found = true;
            break;
        }
        temp = temp->next; //to traverse through linked list
    }

    if(found == true){
        cout<<"Element found."<<endl;
    }else{
        cout<<"Element not found."<<endl;
    }

    return 0;
}