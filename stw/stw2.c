#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x) {
   struct Node *temp;
   temp = (struct Node *)malloc(sizeof(struct Node));
   if(temp == NULL){
       printf("stack overflow");
       return;
   }
   temp->data = x;
   temp->next = top;//arrow used bcz of pointer
   top = temp;

   
}

int pop(){
    struct Node *temp;
    int val;
    if(top == NULL){
        printf("stack underflow");
        return -1;
    }
    temp = top;
   top = top->next;
    val = temp->data;
    free(temp);
    return val;
   
}

int peek(int pos){
    int i;
    struct Node *temp;
    temp=top;

    for(i=0;temp -> next !=NULL&& i<pos-1;i++){
        temp = temp->next;
    }
    temp = temp->next;
    if(temp==NULL){
        return -1;

    }
    else{
        return temp-> data;
    }

}
int isEmpty(){
    if(top==NULL)
{
    printf("the stack is empty");
    return 1;
}
    return 0;
             }
int isFull(){
  struct Node *temp;
   temp = (struct Node *)malloc(sizeof(struct Node));
   if(temp==NULL){
    printf("the stack is full");
    return 1;
   }
   return 0;

}

int stackTop(){
   if(top==NULL){

        printf("the stack is empty");
        return -1;
    } 
    return top->data;

}
int main()
{
    push(7);//7
    push(8);//7 8
    pop();//7
    push(9);//7 9 
    printf("Element at the top of the stack is %d\n",stackTop());
     push(10);//7 9 10
    push(19);//7 9 10 19 
    printf("element at position 3 is %d\n",peek(3));//9
    printf("is empty: %d\n ",isEmpty());//0
    printf("is full: %d\n",isFull());//0
    

}