#include<stdio.h>

void main()
{
          int a[3],b[3],c[6],i,j=0;

          for(i=0;i<3;i++)
          {
              printf("\n Enter the number %d of A:",i+1);
              scanf("%d",&a[i]);

          }
          for(i=0;i<3;i++)
          {
              printf("\n Enter the number %d of B:",i+1);
              scanf("%d",&b[i]);

          }


          printf("\nThese are the elements entered for A:");

          for(i=0;i<3;i++)
          {
              printf("\nOn the position %d value is %d ",i+1,a[i]);

          }

           printf("\nThese are the elements entered for B:");

          for(i=0;i<3;i++)
          {
              printf("\nOn the position %d value is %d ",i+1,b[i]);

          }
           for(i=0;i<3;i++)
          {
              c[j]=a[i];
              j++;

          }
           for(i=0;i<3;i++)
          {
              c[j]=b[i];
              j++;

          }

          printf("\nThese are the elements for C:");

         for(i=0;i<6;i++)
          {

              printf("\nOn the position %d value is %d ",i+1,c[i]);

          }



}

