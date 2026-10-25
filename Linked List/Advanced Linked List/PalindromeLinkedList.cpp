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