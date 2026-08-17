#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value);
int pop();

void main()
 {
    int a, b, temp = 1, i;


    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter value B: ");
    scanf("%d", &b);

    push(a);
    push(b);
    b = pop();
    a = pop();


        while (b != 0)
         {
            temp = b;
            b = a % b;
            a = temp;

        }


    printf("The GCD is %d", a);

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
        stack[top] = value;
    }
}

int pop()
 {
    if (top == -1)
        {
        printf("\nStack underflow.\n");
        return -1;
    }
    else
        {
        int v = stack[top];
        top--;
        return v;
    }
}


