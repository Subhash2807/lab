#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k,p;
 clrscr();
 printf("Please enter a number");
 scanf("%d",&n);
 for(i=0;i<n;i++)
   {
     for(j=0;j<n-i;j++)
       {
	 printf(" ");
       }
      p=1;
     for(k=0;k<=i;k++)
       {
	 printf(" %d",p);
	 p=p*(i-k)/(k+1);
       }
     printf("\n");
   }
   getch();
 }