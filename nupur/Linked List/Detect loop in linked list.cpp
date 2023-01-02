
/*Loop in a linked list refers to an endless cycle in the list such that if we start traversing the list we will never reach the end of the linked list (i.e. NULL).

We take two pointers slow and fast and point them to the first node by equating to head.

We move the fast pointer by two nodes and slow pointer by one node at a time.

If the link part of the fast pointer or the fast pointer becomes NULL, it means there is no loop and we have reached the end of the list.

Otherwise, If slow and fast pointers meet at some point i.e. they both point to the same element, it means that there is a loop in the linked list.*/

//function for detect loop in linked list 

int findLoop (Node *head)
{
Node *slow, *fast;
slow=head;
fast=head;
 while (fast!=NULL && fast->link!=NULL )
 {
 fast= fast->link->link;
 slow = slow->link;
  if (slow ==  fast)
  {
  return 1;   //loop found
  }
 }
return 0;      //No loop, reached end of list
}
