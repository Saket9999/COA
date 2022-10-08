#include <omp.h>
#include <stdio.h>
#include <time.h>

void main()
{
  int tid;
  time_t t;
  #pragma omp parallel
  tid=omp_get_thread_num();
  printf("thread %d\n",tid);
  time(&t);
  printf("Current Day and Time %s\n",ctime(&t));
  
}