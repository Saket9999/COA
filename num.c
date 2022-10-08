#include"omp.h"
#include"stdio.h"
void main()
{
  #pragma omp parallel
  printf("hello %d\n",omp_get_thread_num());
}
