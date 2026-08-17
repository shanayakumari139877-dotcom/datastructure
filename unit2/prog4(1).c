#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int value);
int pop();

int main() {
    int i, n, fact = 1;

    printf("Enter a value: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++)
        {
        push(i);
    }

    while (top != -1)
        {
        fact = fact * pop();
    }

    printf("Factorial is %d\n", fact);
    return 0;
}

void push(int value)
 {
    if (top == MAX - 1)
        {
        printf("\nStack overflow.\n");
    } else
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

