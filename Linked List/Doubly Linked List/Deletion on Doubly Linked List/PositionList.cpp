/*Deletion on a specific position in doubly linked list*/

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

//create doubly linked list
void createList(Node* &head,Node* &tail){ //passing by reference because we are changing head and tail value
    int n;
    cout<<"Enter number of Nodes: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Enter value of Node "<<i<<": ";
        cin>>x;

        Node* newNode = new Node(x);

        //check whether list exists or not
        if (head == NULL)
        {
            head = newNode; //first node
            tail = newNode;

        }else{

            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;

        }
        
    }
    
}

//print doubly list
void printList(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

//deletion at specific position
void deletePosition(Node* &head,Node* &tail,int pos){
    //case 1: if list is empty
    if (head == NULL)
    {
        cout<<"List empty. Nothing to delete...";
        return;
    }
    //case 2: negative position
    if (pos <= 0)
    {
        cout<<"Invalid Position...Kindly check";
        return;
    }
    //case 3: position is 1{at start}
    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }else{
            tail = NULL;
        }
        delete temp;
        return;
    }
    // case 4: traverse to the required position
    Node* temp = head;
    int count = 1;

    while(temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }

    // position out of range
    if(temp == NULL)
    {
        cout << "Position out of range...";
        return;
    }

    // case 5: delete last node
    if(temp == tail)
    {
        tail = tail->prev;

        if(tail != NULL)
        {
            tail->next = NULL;
        }
        else
        {
            head = NULL;
        }

        delete temp;
        return;
    }

    // case 6: delete middle node
    temp->prev->next = temp->next; 
    temp->next->prev = temp->prev;
    delete temp;
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    //create list
    createList(head,tail);

    //print list
    cout<<"Before Deletion: ";
    printList(head);
    cout<<endl;

    int pos;
    cout<<"Enter Position to be deleted: ";
    cin>>pos;
    cout<<endl;

    //delete specific position
    deletePosition(head,tail,pos);

    printList(head);
    return 0;
}