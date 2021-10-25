#include <stdio.h>
#define STACK_MAX 5

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item);
int pop(Stack *s);

int main(void)
{
    Stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack, 100);
    push(&my_stack, 60);

    item = pop(&my_stack);
    printf("Pop Element : %d", item);

    return 0;
}

// push
void push(Stack *s, int item)
{
    if(s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        s->top += 1;
    }
    else
        printf("Stack full!\n");
}

// pop
int pop(Stack *s)
{
    int item;
    if(s->top >= 0)
    {
        s->top -= 1;
        item = s->data[s->top];
    }
    else
    {
        printf("Stack is Empty.\n");
        return -1;
    }
    return item;
}
