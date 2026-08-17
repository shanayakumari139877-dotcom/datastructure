#include <stdio.h>
#define MAX 20

char stack[MAX];
int top = -1;

void push(char value);
char pop();

void main()
{
    char str[MAX];
    int i;

    printf("Enter a string (max %d chars): ", MAX - 1);

   gets(str);
   while (str[i]!='\0')
   {
       push (str[i]);
       i++;
   }
   while(top!=-1)
   {
       printf("\n%c",pop());
   }

}

void push(char value)
{
    if (top == MAX - 1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

char pop()
 {
    if (top == -1)
    {
        printf("\nStack underflow.\n");
        return '\0';
    }
    else
    {
        char v = stack[top];
        top--;
        return v;
    }
}
