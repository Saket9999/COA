#include <omp.h>
#include <stdio.h>


int main()
{
double start;
double end,etime;
  int n=10,i,v=1,m=0;
 int  a[n],b[n],c[n],d[n],e[n];
  
  for(i=0;i<n;i++)
  {
    printf("Enter Age Of %d Person ",i);
    scanf("%d",&a[i]);
  }  
  
  #pragma omp parallel //sections
  {
  
  //  #pragma omp section
    for(i=0;i<n;i++)
    {
    if(a[i]>=16 & a[i]<18)
    {
      omp_set_num_threads(v);
      printf("My Thread is %d And Person Whose Age Is %d Eligible\n",omp_get_thread_num(),a[i]);
    } 
    else
    { 
       omp_set_num_threads(m);
       printf("My Thread is %d And Person Whose Age Is %d Not Eligible\n",omp_get_thread_num(),a[i]);
     }  
     }  
    etime=end-start;
printf("\nWorking time iin %fSecound\n",etime);
    
    
 /* //   #pragma omp section
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
    }*/
    
  }
  return 0;
  
}
