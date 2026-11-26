/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next;
}NODE;

/* Insert at front */
NODE*insertFront(NODE *head, int x)
{
NODE*newnode,*temp;
newnode=(NODE*)malloc(sizeof(NODE));
if (newnode ==NULL)
{
printf("Memory allocation failed\n");
return head;
}
newnode->data =x;
if (head == NULL)
{
newnode->next = newnode;
return newnode;
}
temp =head;
while (temp->next != head)
temp =temp->next;
newnode->next = head;
temp->next = newnode;
return newnode;
}
/* Insert at rear */
NODE*insertRear(NODE *head, int x)
{
NODE*newnode,*temp;
newnode=(NODE*)malloc(sizeof(NODE));
if (newnode ==NULL)
{
printf("Memory allocation failed\n");
return head;
}
newnode->data =x;
if (head == NULL)
{
newnode->next = newnode;
return newnode;
}
temp =head;
while (temp->next != head)
temp =temp->next;
temp->next = newnode;
newnode->next = head;
return head;
}
/* Delete at front */
NODE*deleteFront(NODE *head)
{
NODE*temp,*last;
if (head == NULL)
{
printf("List is empty\n");
return head;
}
if (head->next == head)
{
free(head);
return NULL;
}
last = head;
while (last->next != head)
last = last->next;
temp =head;
head =head->next;
last->next = head;
free(temp);
return head;
}
/* Delete at rear */
NODE*deleteRear(NODE*head)
{
NODE*temp,*prev;
if (head == NULL)
{
printf("List is empty\n");
return head;
}
if (head->next == head)
{
free(head);
return NULL;
}
temp =head;
prev =NULL;
while (temp->next != head)
{
prev =temp;
temp =temp->next;
}
prev->next = head;
free(temp);
return head;
}
/* Insert at specified position */
NODE*insertPosition(NODE *head, int x, int pos)
{
NODE*newnode,*temp;
int i;
if (pos < 1)
{
printf("Invalid position\n");
return head;
}
if (pos == 1)
return insertFront(head, x);
if (head == NULL)
{
printf("Invalid position\n");
return head;
}
temp =head;
for (i = 1; i < pos- 1 && temp->next !=head; i++)
temp =temp->next;
if (i != pos- 1)
{
printf("Invalid position\n");
return head;
}
newnode=(NODE*)malloc(sizeof(NODE));
if (newnode ==NULL)
{
printf("Memory allocation failed\n");
return head;
}
newnode->data =x;
newnode->next = temp->next;
temp->next = newnode;
return head;
}
/* Delete at specified position */
NODE*deletePosition(NODE *head, int pos)
{
NODE*temp,*del;
int i;
if (head == NULL || pos<1)
{
printf("Invalid position or empty list\n");
return head;
}
if (pos == 1)
return deleteFront(head);
temp =head;
for (i = 1; i < pos- 1 && temp->next !=head; i++)
temp =temp->next;
if (i != pos- 1 || temp->next == head)
{
printf("Invalid position\n");
return head;
}
del = temp->next;
temp->next = del->next;
free(del);
return head;
}
/* Delete by key */
NODE*deleteKey(NODE*head, int key)
{
NODE*temp,*prev;
if (head == NULL)
{
printf("List is empty\n");
return head;
}
temp =head;
prev =NULL;
do
{
if (temp->data == key)
break;
prev =temp;
temp =temp->next;
} while (temp != head);
if (temp->data != key)
{
printf("Key not found\n");
return head;
}
if (temp == head)
return deleteFront(head);
prev->next = temp->next;
free(temp);
printf("Key deleted successfully\n");
return head;
}
/* Search by key*/
void search(NODE *head, int key)
{
NODE*temp;
int pos = 1;
if (head ==NULL)
{
printf("List is empty\n");
}
return;
temp =head;
while (temp != NULL)
{
if (temp->data == key)
{
printf("Element found at position %d\n", pos);
return;
}
temp =temp->next;
pos++;
if (temp ==head)
break;
}
printf("Element not found\n");
}
/* Create ordered list in ascending order */
NODE*createOrdered(NODE*head, int x)
{
NODE*newnode,*temp;
newnode=(NODE*)malloc(sizeof(NODE));
if (newnode ==NULL)
{
printf("Memory allocation failed\n");
return head;
}
newnode->data =x;
if (head == NULL)
{
newnode->next = newnode;
return newnode;
}
/* Insert before the first node */
if (x < head->data)
{
temp =head;
while (temp->next != head)
temp =temp->next;
newnode->next = head;
temp->next = newnode;
return newnode;
}
temp =head;
while (temp->next != head &&
temp->next->data <= x)
{
temp =temp->next;
}
newnode->next = temp->next;
temp->next = newnode;

return head;
}
/* Reverse the circular list */
NODE*reverse(NODE*head)
{
NODE*prev,*current, *next, *last;
if (head == NULL || head->next == head)
return head;
last = head;
while (last->next != head)
last = last->next;
prev =last;
current = head;
do
{
next = current->next;
current->next = prev;
prev =current;
current = next;
} while (current != head);
head =prev;
return head;
}
/* Create a copy of the list */
NODE*copyList(NODE*head)
{
NODE*copy=NULL;
NODE*last =NULL;
NODE*temp;
NODE*newnode;
if (head == NULL)
return NULL;
temp =head;
do
{
newnode=(NODE*)malloc(sizeof(NODE));
if (newnode ==NULL)
{
printf("Memory allocation failed\n");
if (copy != NULL)
{
last->next = NULL;
while (copy != NULL)
{
temp =copy;
copy =copy->next;
free(temp);
}
}
return NULL;
}
newnode->data =temp->data;
if (copy == NULL)
{
copy =newnode;
last = newnode;
}
else
{
last->next = newnode;
last = newnode;
}
temp =temp->next;
} while (temp != head);
last->next = copy;
return copy;
}
/* Display the circular list */
void display(NODE *head)
{
NODE*temp;
if (head == NULL)
{
printf("List is empty\n");
return;
}
temp =head;
printf("Circular List: ");
do
{
printf("%d-> ", temp->data);
temp =temp->next;
} while (temp != head);
printf("(back to head)\n");
}

int main()
{
    NODE*head;
    NODE*copy=NULL;
    NODE n1,n2,n3,n4,n5;
    n1.data=1;
    n2.data=2;
    n3.data=3;
    n4.data=4;
    n5.data=5;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=NULL;
    head=&n1;
    printf("link list= ");
    NODE*temp=head;
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->next;
        
    }
    printf("null\n");
    int choice, x, pos, key;
while (1)
{
printf("\n--- CIRCULAR SINGLY LINKED LIST MENU---\n");
printf("1. Insert at front\n");
printf("2. Insert at rear\n");
printf("3. Delete at front\n");
printf("4. Delete at rear\n");
printf("5. Insert at specified position\n");
printf("6. Delete at specified position\n");
printf("7. Delete by key\n");
printf("8. Search by key\n");
printf("9. Create ordered list\n");
printf("10. Reverse the list\n");
printf("11. Create a copy of the list\n");
printf("12. Display the list\n");
printf("13. Display copied list\n");
printf("14. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter element: ");
scanf("%d", &x);
head =insertFront(head, x);
break;
case 2:
printf("Enter element: ");
scanf("%d", &x);
head =insertRear(head, x);
break;
case 3:
head =deleteFront(head);
break;
case 4:
head =deleteRear(head);
break;
case 5:
printf("Enter element and position: ");
scanf("%d %d", &x, &pos);
head =insertPosition(head, x, pos);
break;
case 6:
printf("Enter position: ");
scanf("%d", &pos);
head =deletePosition(head, pos);
break;
case 7:
printf("Enter key to delete: ");
scanf("%d", &key);
head =deleteKey(head, key);
break;
case 8:
printf("Enter key to search: ");
scanf("%d", &key);
search(head, key);
break;
case 9:
printf("Enter element: ");
scanf("%d", &x);
head =createOrdered(head, x);
display(head);
break;
case 10:
head =reverse(head);
printf("List reversed\n");
display(head);
break;
case 11:
copy =copyList(head);
if (head != NULL &&copy==NULL)
printf("Copy failed\n");
else
printf("List copied successfully\n");
break;
case 12:
display(head);
break;
case 13:
display(copy);
break;
case 14:
printf("Exiting program\n");
return 0;
default:
printf("Invalid choice\n");
}
}


    

    return 0;
}
