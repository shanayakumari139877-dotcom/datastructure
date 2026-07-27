#include<stdio.h>

void main()
{
    int a[20],i,temp,j,n;
    printf("Enter the limit:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter the value %d:",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

          if(a[i]<a[j])
          {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          }

        }
    }




    for(i=0;i<n;i++)
          {

              printf("\n %d ",a[i]);

          }
    }
