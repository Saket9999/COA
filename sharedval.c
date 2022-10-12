#include<stdio.h>
#include<omp.h>

int main()
{
  int x=9;
  #pragma omp parallel for lastprivate(x) 
  
  
    for(int i=0;i<5;i++)
  {
     printf("\nValue of X is %d inside loop with thread no is %d",x,omp_get_thread_num());
      x=i;
      printf("\nValue of X is %d inside loop with thread no is %d",x,omp_get_thread_num());
      
  }
  
  printf("\nValue of X outside loop is %d",x);
      
  
  return 0;
}