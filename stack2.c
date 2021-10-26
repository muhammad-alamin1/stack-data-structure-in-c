#include <stdio.h>
#include <string.h>

int is_balanced(char arr[]);

int main(void)
{
    char input[100];

    scanf("%s", input);

    if(is_balanced(input))
        printf("%s is balanced.\n", input);
    else
        printf("%s is not balanced.\n");

    return 0;
}

int is_balanced(char arr[])
{
    char stack[100], last_char;
    int top, len, i;

    top = 0;
    len = strlen(arr);

    for(i = 0; i < len; i++)
    {
        if(arr[i] == '{(')
        {
            stack[top] = '{(';
            top++;
        }
        else if(arr[i] == ')}')
        {
            if(top == 0)
            {
                printf("Stack is empty.!");
                return 0;
            }

            top--;

            last_char = stack[top];
            if(last_char != '(')
                return 0;
        }
    }

    if(top == 0)
        return 1;
    else
        return 0;
}
