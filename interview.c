#include<omp.h>
#include<stdio.h>

int average(int a[],int n);
void main()
{
  double start;
double end,etime;
  char name[10];
  char comp[]={'A','G','S','I'};
  int r[10],p[10],n=5,b=4,f=1;
  omp_set_num_threads(b);
  
  
  for(int i=1;i<=n;i++)
  {
    printf("\nEnter Name of Student %d:",i);
    scanf("%s",&name[i]);
    printf("\nEnter Registeration no %d:",i);
    scanf("%d",&r[i]);
    printf("\nEnter Pacakage in LPA:");
    scanf("%d",&p[i]);
    
  } 
  start=omp_get_wtime();
  #pragma omp parallel 
  
    for(int i=1;i<=n;i++)
    {
     
      if(f)
      {
      f=0;
      printf("\nStudent %d Selected in %c Company",i,comp[omp_get_thread_num()]);
      f=1;
    
      }
     //  printf("thread no is %d and f is%d",omp_get_thread_num(),f);
     printf(" ");
   }
      
   
    
  
  
  printf("\nAverage Pay Package is %d",average(p,n));
  
  end=omp_get_wtime();
  etime=end-start;
  printf("\nWorking time in %fSecound\n",etime);
  
}

int average(int a[],int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+a[i];
  }
  sum=sum/n;
  return sum;
}