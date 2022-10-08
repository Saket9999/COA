#include<stdio.h>

void main ()
{
 int a,b=0,c;
 
 for(i=0;i<5;i++)
 {
   scanf("%d",&a);
   b=b+a;
 }
 c=b/5;
 
 printf("Average of Number is %d",c);
}