/* Insertion at Begining in circular linked list*/

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

//input
void createList(Node* &head, Node* &tail){
    int n;
    cout<<"Enter size of Node: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Enter value of Node "<<i<<": ";
        cin>>x;

        Node* newNode = new Node(x);

        //check whether list is empty or not
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    //connecting last node with head
    if(head != NULL){
        tail->next = head;
    }
}


//print list
void printList(Node* head){
    Node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head);
    
}

//insert at begining
void insertAtBegining(){
    
}
int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    //create list
    createList(head,tail);

    //print list
    printList(head);

    return 0;
}