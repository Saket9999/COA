#include<stdio.h>
#include<omp.h>

int main()
{
  float p,q;
  int t,m,n;
  printf("Enter value of x:");
  scanf("%f",&p);
  
  t=p*10;
  m=t%10;
  
  if(m!=0)
  {
    printf("%f is rational Number",p);
  }
  n=p;
  t=0;
  m=0;
  for(int i=2;i<n;i++)
  {
    printf("#");
    m=n%i;
    if(m==0)
    {
      t=t+m;
    }
  }
  if(t==n)
    printf("%d is perfect Number",n);
   m=0; 
  for(int i=2;i<n/2;i++)
  {
    m=n%i;
    if(m!=0)
    {
      printf("%d is Prime Number",n);
    }
    
   } 
    
    return 0;
  }  