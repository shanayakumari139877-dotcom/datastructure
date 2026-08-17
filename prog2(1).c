#include<conio.h>
int factorial(int n);
void main()
{
    int n,z;
    printf("Enter value for factorial:");
    scanf("%d",&n);
    z=factorial(n);
    printf("Factorial of %d is %d.",n,z);
}

int factorial(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*factorial(n-1);
    return f;
}
