#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *create(int *a,int n){
    struct Node *p,*last,*first;
    int i;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = a[0];
    p->next = NULL;
    first = p;
    last = p;
    for(i=1;i<n;i++){
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
         last = p;
    }
    return first;
}
void display(struct Node *p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main(){
    int a;
    int x[5] = {10,20,30,40,50};
    struct Node *first = create(x,5);
    display(first);
}