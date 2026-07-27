#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,n=0,sum;
printf("\n Enter the values for matrix A\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        printf("Enter value for [%d][%d] ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("\n Enter the values for matrix B\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        printf("Enter value for [%d][%d] ",i,j);
        scanf("%d",&b[i][j]);
    }
}

//logic
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
       c[i][j]=0;
       for (n=0;n<3;n++)
       {
            c[i][j]=c[i][j]+(a[i][n]*b[n][j]);
       }
    }

}

printf("values of matrix A");
for (i=0;i<3;i++)
{
    printf("\n");
    for (j=0;j<3;j++)
    {
        printf("%3d",a[i][j]);
    }
    printf("\n");
}
printf("values of matrix B");
for (i=0;i<3;i++)
{
    printf("\n");
    for (j=0;j<3;j++)
    {
        printf("%3d",b[i][j]);
    }
    printf("\n");
}
printf("values of matrix C");
for (i=0;i<3;i++)
{
    printf("\n");
    for (j=0;j<3;j++)
    {
        printf("%3d",c[i][j]);
    }
    printf("\n");
}










}


