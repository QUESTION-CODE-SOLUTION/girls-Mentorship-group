#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct dllNode{
 int info;
 struct dllNode *next,*prev;
};
struct dllNode *head = NULL;
// Create a Node of doublylinkedlist
struct dllNode * CreatedLLNode()
{
 struct dllNode *newNode;
 int value;
 printf("Enter the value to be inserted : ");
 scanf("%d", &value);
 newNode = (struct dllNode *)malloc(sizeof(struct dllNode));
 newNode->info = value;
 newNode->next = NULL;
 newNode->prev = NULL;
 return(newNode);
}
struct dllNode * CreatedLL(struct dllNode * head)
{
 int value, ch = 0;
 struct dllNode *ptr, *qtr;
 printf("Lets Create Linked List\n ");
 do{
 ptr = CreatedLLNode();
 if(head == NULL)
 head = ptr;
Priya jain
0108cs211100
2
 else{
 qtr = head;
 while(qtr->next != NULL)
 qtr = qtr->next;
 ptr->prev=qtr;
 qtr->next = ptr;
 }
 printf("Do you want to add more values (0/1)");
 scanf("%d", &ch);
 }while(ch != 0);
 return(head);
}
struct dllNode * displaydLL(struct dllNode *head)
{
 struct dllNode *ptr;
 ptr = head;
 if(head == NULL)
 printf("LIST is EMPTY");
 else {
 while(ptr != NULL)
 {
 printf(" %d ", ptr->info);
 ptr = ptr->next;
 }
 }
 return(head);
}
// Insert a node at front
struct dllNode * insertAtBeg(struct dllNode * head)
{
 struct dllNode *newNode;
 newNode = CreatedLLNode();
 head->prev = newNode;
 newNode->next = head;
 head = newNode;
Priya jain
0108cs211100
3
 return(head);
}
// Insert Node at the end.
struct dllNode * insertAtEnd(struct dllNode *head)
{
 struct dllNode *newNode, *ptr;
 newNode = CreatedLLNode();
 ptr = head;
 while(ptr->next != NULL)
 ptr = ptr->next;
 newNode->prev = ptr;
 ptr->next = newNode;
 return(head);
}
struct dllNode *InsertBetween(struct dllNode * head, int pos)
{
 struct dllNode *ptr, *newNode;
 int count =1;
 ptr = head;
 newNode = CreatedLLNode();
 while(count < (pos-1))
 {
 ptr = ptr->next;
 count++;
 }
 newNode->prev = ptr;
 newNode->next = ptr->next;
 ptr->next = newNode;
 newNode->next->prev = newNode;
 return(head);
}
// function to update info field.
struct dllNode* upDate(struct dllNode*head, int old, int snew)
{
Priya jain
0108cs211100
4
 struct dllNode *ptr;
 ptr = head;
 while (ptr->next!= NULL)
 {

 if(ptr->info == old)
 ptr->info = snew;
 ptr = ptr->next;
 ptr->prev = ptr;
 }
 return(head);
}
struct dllNode * DeleteatFirst(struct dllNode * head)
{
 head = head->next;
 head->prev= NULL;
 return(head);
}
struct dllNode * DeleteatEnd(struct dllNode* head)
{
 struct dllNode *ptr = head ;
 while(ptr->next->next != NULL)
 ptr = ptr->next;
 ptr->prev = NULL;
 ptr->next = NULL;

 return(head);
}
struct dllNode * Deletebetween(struct dllNode* head, int pos)
{
 struct dllNode *ptr, *newNode;
 int count =1;
 ptr = head;
 while(count < (pos-1))
 {
Priya jain
0108cs211100
5
 ptr = ptr->next;
 count++;
 }
 ptr->next = ptr->next->next;
 ptr->next->prev = ptr;
 return(head);
}
int main()
{
 int ch1;
 int pos, old, snew;
 printf("\n-----PROGRAM TO CREATE DOUBLYLINKED LIST-------\n");
 do{
 printf("\nEnter your choice: \n");
 printf("\n1......Create List");
 printf("\n2......Display List");
 printf("\n3......Insert at beginning");
 printf("\n4......Insert at End");
 printf("\n5..... Insert in between");
 printf("\n6..... Update the list Node");
 printf("\n7......Delete at First");
 printf("\n8......Delete at End");
 printf("\n9......Delete in between");
 printf("\n0......Exit");
 scanf("%d", &ch1);

 switch (ch1)
 {
 case 1:
 head = CreatedLL(head);
 break;
 case 2:
 head = displaydLL(head);
 break;
 case 3:
Priya jain
0108cs211100
6
 head = insertAtBeg(head);
 break;
 case 4:
 head = insertAtEnd(head);
 break;
 case 5:
 printf("Enter the position to insert new node:");
 scanf("%d", &pos);
 head = InsertBetween(head, pos);
 break;
 case 6:
 printf("Enter the node value to be updated:");
 scanf("%d", &old);
 printf("Enter the value to update:");
 scanf("%d", &snew);
 head = upDate(head, old, snew);
 break;
 case 7:
 head = DeleteatFirst(head);
 break;
 case 8:
 head = DeleteatEnd(head);
 break;
 case 9:
 printf("Enter the position to delete node:");
 scanf("%d", &pos);
 head = Deletebetween(head, pos);
 break;

 case 0:
 printf("\n-----BYE-BYE------\n");
 exit(0);
 }
 }while(1);
}
