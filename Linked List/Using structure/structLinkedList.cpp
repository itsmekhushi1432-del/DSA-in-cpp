/*Creation of node using struct*/

#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main(){
    
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    
    Node* head = first;

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}