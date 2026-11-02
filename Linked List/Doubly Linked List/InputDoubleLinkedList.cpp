/*Input n
Repeat n times
Take value
Create new node

If first node
    head = newNode
    tail = newNode

Else
tail->next = newNode
newNode->prev = tail
tail = newNode*/

#include<iostream>

using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }

};

int main(){
    
    Node* head = NULL;//head points to the first node
    Node* tail = NULL;//tail points to the last node

    int n;
    cout<<"Enter the number of Nodes: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;//node value
        cout<<"Enter value of Node "<<i<<":"<<endl;
        cin>>x;


        Node* newNode = new Node(x);

        //first node
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        
    }

    cout<<endl;
    cout<<"Doubly Linked List: ";
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    
    return 0;
}