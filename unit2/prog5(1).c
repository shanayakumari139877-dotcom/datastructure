#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int value);
int pop();

int main() {
    int base, power, result = 1,i;

    printf("Enter a base value: ");
    scanf("%d", &base);

    printf("Enter a power value: ");
    scanf("%d", &power);



    for (i = 1; i <= power; i++)
        {
        push(base);
    }

    while (top != -1)
        {
        result = result * pop();
    }

    printf("The result of %d ^ %d is %d",base,power,result);
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
