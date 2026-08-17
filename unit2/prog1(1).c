#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();
void main()
{
    int op;
    do
    {
        printf("\n1. push");
        printf("\n2. pop");
        printf("\n3. peek");
        printf("\n4. update");
        printf("\n5. display");
        printf("\n6. exit");

        printf("\nEnter the choice:");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            update();
            break;
        case 5:
            display();
            break;
    }}while(op!=6);
}
    void push()
    {
        int value;
        printf("\nEnter the value to be inserted");
        scanf("%d",&value);
        if (top==MAX-1)
        {
            printf("\nStack is overflow.");
        }
        else
        {
            top++;
            stack[top]=value;
        }
    }
    void pop()
    {
        int v;

        if (top==-1)
        {
            printf("\nStack is underflow.");
        }
        else
        {
            v=stack[top];
            top--;
            printf("\nThe deleted element is %d",v);
        }
    }
    void peek()
    {
       if (top==-1)
        {
            printf("\nStack is underflow.");
        }
        else
        {
            printf("\nThe topmost element is %d",stack[top]);
        }
    }
    void update()
    {
        int i,x;
        printf("\nEnter the index to be updated");
        scanf("%d",&i);
        printf("\nEnter the value to be updated");
        scanf("%d",&x);
        if ((top-i+1)<=-1)
        {
            printf("\nIndex value is wrong.");
        }
        else
        {
            stack[top-i+1]=x;
        }


    }
    void display()
    {
        int i;
        for (i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }







