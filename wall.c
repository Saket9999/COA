#include <omp.h>
#include <stdio.h>
#include <time.h> 

void main()
{
double start;
double end,etime;
start=omp_get_wtime();
for(long double i=0;i<10000;i++)
  {
    printf("*");
  }
end=omp_get_wtime();
etime=end-start;
printf("\nWorking time iin %fSecound\n",etime);
  }

