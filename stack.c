#include <stdio.h>
#define CAPACITY 5

int stack[CAPACITY];
int top = -1;

void push(int x);
int pop();
int peek();

int main(void)
{
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    printf("Pop item: %d\n", pop());
    push(70);
    push(80);
    printf("Top of stack : %d\n", peek());

    return 0;
}

// push
void push(int x)
{
    if(top < CAPACITY)
    {
        top += 1;
        stack[top] = x;
        printf("Succesfully added item: %d\n", x);
    }
    else
    {
        printf("Exception! No space.\n");
    }
}

// pop
int pop()
{
    if(top >= 0)
    {
        int value = stack[top];
        top -=1;
        return value;
    }
    printf("Exception from Pop! Empty Stack.\n");
    return -1;
}

// peek
int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    printf("Exception from peek! Empty Stack\n");
    return -1;
}

