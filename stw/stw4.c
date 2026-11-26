//circular_queue.c
#include<stdio.h>
#include<stdlib.h>
struct Queue {
    int size;
    int first;
    int rear;
    int *Q;
};

void enqueue(struct Queue *q ,int x){
    if((q->rear+1)%q->size==q->first){
        printf("the queue is full");
        return ;
    }
    q->rear++;
    q->Q[q->rear]=x;

}
int dequeue (struct Queue *q){
    if(q->first == q->rear){
        printf("the queue is empty");
        return -1;
    }
    
    q->first = (q->first+1)%q->size;
    return q->Q[q->first];
}
int main(){

}