#include<stdio.h>
#include<conio.h>
void main()
{
 int a[30],size,i,j,temp;
 clrscr();
 printf("enter the size of an element\n");
 scanf("%d",&size);
 printf("enter %d elements\n",size);
 for(i=0;i<size;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("before sorting elements\n");
 for(i=0;i<size;i++)
   {
    printf("%d\n",a[i]);
   }
   for(i=1;i<size;i++)
     {
      for(j=0;j<size;j++)
        {
         if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
     }
     printf("after bubble sorting array\n");
       for(i=0;i<size;i++)
         {
           printf("%d\n",a[i]);
         }
 getch();
}