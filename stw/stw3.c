//queue 
#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int size;
    int first;
    int rear;
    int *Q;
};
   void enqueue(struct Queue *q ,int x){
    if(q->rear+1==q->size)
      {
       printf("queue is full");
       return;
      }
 
   q->rear++;
   q->Q[q->rear]=x;
   }

   int dequeue(struct Queue *q){
    if(q->first==q->rear){
        printf("queue is empty");
        return -1;
    }
    q->first++;
    return q->Q[q->first];

   }
   int main(){
   
    struct Queue q;
    printf("enter the size of the queue: ");
    scanf("%d\n", q.size);
    q.Q = (int *)malloc(q.size  *sizeof(int));
    q.first = -1;
    q.rear = -1;



   }