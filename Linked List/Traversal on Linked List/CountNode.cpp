// count the number of nodes

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

    //traversal
    Node* temp = head;
    int count = 0;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";//print data of the current node
        temp = temp->next;//move to next node
        count++;
    }
    cout<<endl;
    cout<<"Total nodes present: "<<count<<endl;
    return 0;
}