//minimum number in list

/* maximum number in node*/

/* Sum of all the nodes present in list*/

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
    int min = head->data;
    while (temp !=NULL)
    {
        if(temp->data<min){
            min = temp->data;
        }
        temp = temp->next;//move to next node
    }
    cout<<endl;
    cout<<"Minimum Number of Nodes: "<<min<<endl;
    return 0;
}