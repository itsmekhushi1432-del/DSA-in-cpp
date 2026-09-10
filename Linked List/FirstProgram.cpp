/*Head Pointer ---> we need something that tells us where the linked list starts.
That's the head pointer.*/

#include<iostream>

using namespace std;

//blueprint of the node
//basically it will tell compiler that we are going to create a node of design this
class Node{
    public:
        int data;//stores data
        Node* next; //stores memory address of next node

        //constructor of linked list
        Node(int value){
          data = value;
         next = NULL;
        }
};

int main(){
    
    Node* head = NULL;//empty linked list
    Node* first = new Node(10); //telling compiler to create a new node and store the value 10
    head = first;
    Node* second = new Node(20);
    first->next = second;  //connecting second node with first 
    Node* third = new Node(30);
    second->next = third;  //connecting third node with second 
    return 0;
}