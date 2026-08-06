#include<stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int value);
int pop();

void main()
{
    int base,power,i;
    int result = 1;

    printf("Enter a base number :");
    scanf("%d", &base);

     printf("Enter a power number :");
    scanf("%d", &power);

    for (i = 1; i <= power; i++)
    {
        push(base);
    }
    while (top != -1)
    {
         result= result * pop();

    }
    printf("\nThe result of %d ^ %d IS %d.\n",base,power,result);
    return 0;


}
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        top++;
        stack[top]= value;
    }

}
int pop()
{
    if (top == -1)
    {
        printf("\nStack underflow.\n");
        return -1;

    }else
    {
        int v = stack [top];
        top--;
        return v;
    }

}
