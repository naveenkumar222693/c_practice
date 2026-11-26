#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
        printf("%d\n,%P",p->data ,&p);
        p=p->next;
    }
}
// Function to count the number of nodes in the linked list
int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
    //add sum of nodes in the linked list
//int add(struct Node *p){
    //int sum =0;
    //while(p!=NULL){
        //sum = sum + p->data;
       // p=p->next;
    //
    //return sum;
   // }
bool search(struct Node *p, int key){
   while(p != NULL){
        if(p->data == key){
            return true;
        }
        p = p->next;

    }
    return false;
}

int main(){
    int a;
    int key;
    int x[5] = {10,20,30,40,50};
    struct Node *first = create(x,5);
    //display(first);
   // int c = count(first);
   // printf("Count: %d\n", c);
    printf("enter the element to be searched: ");
    scanf("%d",&key);
    printf("element found: %d\n",search(first,key));
   return 0;
   }

