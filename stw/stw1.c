#include<stdio.h>
#include<stdlib.h>

// Abstract datatype for stack
struct stack{
    int maxSize;
    int top;
    int *s;
}*st;

void push(int x) {
    // verify whether stack is full, if so then return
    if(st->top + 1 == st->maxSize) {
        printf("stack is full!!");
        return;
    }

    // insert the element in the stack
    st->top++;
    st->s[st->top] = x;
}

int pop() {
    // verify whether stack is empty, if so return -1
    if(st->top == -1) {
        printf("stack is empty!!");
        return -1;
    }

    // remove the element
    int x;
    x = st->s[st->top];
    st->top--;
    return x;
}

// outputs the element stored in "pos" position from top
int peek(int pos) {
    int index;
    // Find out the postion of interest
    index = st->top + 1 - pos;
    if(index < 0 || index > st->top + 1) {
        printf("invalid position!!");
        return -1;
    }
    return st->s[index];
}

// outputs 1 if stack if empty, else outputs 0
int isEmpty() {
    if(st->top == -1) {
        printf("Stack is empty");
        return 1;
    }
    return 0;
}

// outputs 1 if stack if full, else outputs 0
int isFull() {
    if(st->top + 1 == st->maxSize) {
        return 1;
    }
    return 0;
}

// outputs the element stored on top of the stack
int stackTop() {
    if(isEmpty() == 1) {
        return -1;
    }
    return st->s[st->top];
}

// creates a stack
void createStack(int n) {
    st = (struct stack *)malloc(sizeof(struct stack));
    st-> top = -1;
    st-> maxSize = n;
    st-> s = (int *)malloc(n * sizeof(int));
}


int main(){
    int n;
    printf("Enter the size of stack");
    scanf("%d", &n);
    createStack(n);
    push(2); // 2
    push(4); // 2, 4
    pop(); // 2
    push(7); // 2, 7
    printf("Is stack empty - %d\n", isEmpty()); // 0
    printf("Element in 2nd position is %d\n", peek(2)); // 2
}

