/*Detection of loop{cycle} in linked list
 Trick ---> If there is a loop,
Slow and Fast will eventually meet.
If there is no loop,
Fast will become NULL.

Detect Loop (Floyd's Cycle Detection Algorithm)

1. Create two pointers:
   - Slow
   - Fast
2. Initially, both point to the head.
3. Move:
   - Slow by one node.
   - Fast by two nodes.
4. If slow and fast meet (slow == fast),
   a loop is present.
5. If fast becomes NULL or fast->next becomes NULL,
   there is no loop.*/

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

    Node* fifth = new Node(50);
    fourth->next = third; //to connect it with third node to create a loop

    //new pointers 
    Node* slow = head;
    Node* fast = head;
    bool found = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow==fast)
        {
            found = true;
            break;
        }
        
    }
    if (found == true)
    {
        cout<<"Loop Detected."<<endl;
    }else{
        cout<<"No Loop exist."<<endl;
    }
    
    

    return 0;
   }
