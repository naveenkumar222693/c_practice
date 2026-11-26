//implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct Node {
   int data;
   struct Node *next;

}*first,*rear=NULL;

void enqueue(int x){
    //check whether the queue is full or not 
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    //adda a node
    temp->data = x;
    temp->next = NULL;
    
    if(rear==NULL){
       first=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

 int dequeue(){
    //check whether the queue is empty or not if yes return
if(first==NULL){
    printf("the queue is empty");
    return -1;
}
//return the valve pointed by first and delete the node
int x;
struct Node *p;
p = first;
first = first->next;
free(p);
return x;

}
 



    
 