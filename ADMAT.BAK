#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],sum[10][10],i,j,r,c;
 clrscr();
 printf("enter the number of row and coulmn of matrix\n");
 scanf("%d%d",&r,&c);

 printf("enter the element of first matrix\n");
 for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
 printf("enter the element of second matrix\n");
 for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
      scanf("%d",&b[i][j]);
     }
   }
 for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
	sum[i][j]=a[i][j]+b[i][j];
     }
   }

   printf("addition of both matrix\n");
 for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
      printf("%d\t",sum[i][j]);
     }
     printf("\n");
   }
    getch();
}