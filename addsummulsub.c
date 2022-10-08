#include <omp.h>
#include <stdio.h>

int main()
{
  int n=10,i;
  float a[n],b[n],c[n],d[n],e[n];
  double start;
double end,etime;
  for(i=0;i<n;i++)
  {
    a[i]=i*2.0;
    b[i]=i+10.0;
  }  
  start=omp_get_wtime();
  #pragma omp parallel //sections
  {
  
  //  #pragma omp section
    for(i=0;i<n;i++)
    {
      c[i]=a[i]+b[i];
      printf("Thread is %d ADD %f\n",omp_get_thread_num(),c[i]);
    }
    
    
  //   #pragma omp section
     for(i=0;i<n;i++)
    {
      d[i]=a[i]*b[i];
      printf("Thread is %d MUL %f\n",omp_get_thread_num(),d[i]);
    }
    
    
  //   #pragma omp section
     for(i=0;i<n;i++)
    {
      e[i]=a[i]-b[i];
      printf("Thread is %d SUB %f\n",omp_get_thread_num(),e[i]);
    }
    end=omp_get_wtime();
     etime=end-start;
printf("\nWorking time iin %fSecound\n",etime);
  }
  return 0;
  
}
