#include<stdio.h>
#include<omp.h>
int main()
{
  int i;
  #pragma omp parallel num_threads(3)
  {
    //#pragma omp for schedule(static,10)
   // #pragma omp for schedule(dynamic,5)
   #pragma omp for schedule(guided,19)
    for(int i=0;i<20;i++)
    {
      printf("\niteration %d run by the thread %d",i,omp_get_thread_num());
    }
  }
}