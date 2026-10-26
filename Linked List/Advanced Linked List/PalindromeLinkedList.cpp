/*
Check Palindrome in Linked List

Logic

1. Create two pointers:
   - slow
   - fast
2. Initially, both pointers point to the head.
3. Move:
   - slow one step.
   - fast two steps.
4. When fast reaches the end,
   slow reaches the middle of the linked list.
5. Reverse the second half of the linked list.
6. Create two pointers:
   - firstHalf = head
   - secondHalf = reversed second half
7. Compare both linked lists node by node.
8. If every node is equal,
   the linked list is a palindrome.
9. If any node is different,
   the linked list is not a palindrome.

************* Trick *************

Find Middle
↓

Reverse Second Half
↓

Compare Both Halves
If all nodes match
→ Palindrome
Else
→ Not Palindrome

Complexity

Time  : O(n)
Space : O(1)
*/
#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int value)
   {
      data = value;
      next = NULL;
   }
};

class LinkedList
{
private:
   Node *head;

public:
   LinkedList()
   {
      head = NULL;
   }

   // Insert at End
   void insertAtEnd(int value)
   {
      Node *newNode = new Node(value);

      if (head == NULL)
      {
         head = newNode;
         return;
      }

      Node *temp = head;

      while (temp->next != NULL)
      {
         temp = temp->next;
      }

      temp->next = newNode;
   }

   // Display Linked List
   void display()
   {
      Node *temp = head;

      while (temp != NULL)
      {
         cout << temp->data << " -> ";
         temp = temp->next;
      }

      cout << "NULL" << endl;
   }

   // Reverse Linked List
   Node *reverse(Node *head)
   {
      Node *prev = NULL;
      Node *curr = head;
      Node *nextNode = NULL;

      while (curr != NULL)
      {
         nextNode = curr->next;
         curr->next = prev;
         prev = curr;
         curr = nextNode;
      }

      return prev;
   }

   // Check Palindrome
   bool isPalindrome()
   {
      if (head == NULL || head->next == NULL)
      {
         return true;
      }

      Node *slow = head;
      Node *fast = head;

      // Find Middle
      while (fast != NULL && fast->next != NULL)
      {
         slow = slow->next;
         fast = fast->next->next;
      }

      // Reverse Second Half
      Node *secondHalf = reverse(slow);

      Node *firstHalf = head;
      Node *temp = secondHalf;

      // Compare Both Halves
      while (temp != NULL)
      {
         if (firstHalf->data != temp->data)
         {
            return false;
         }

         firstHalf = firstHalf->next;
         temp = temp->next;
      }

      return true;
   }
};

int main()
{
   LinkedList list;

   list.insertAtEnd(1);
   list.insertAtEnd(2);
   list.insertAtEnd(3);
   list.insertAtEnd(2);
   list.insertAtEnd(1);

   cout << "Linked List : ";
   list.display();

   if (list.isPalindrome())
   {
      cout << "Palindrome Linked List";
   }
   else
   {
      cout << "Not a Palindrome Linked List";
   }

   return 0;
}