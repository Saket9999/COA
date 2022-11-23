#include<math.h>
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <sys/time.h>
# define n 10

  int a[n][n];
  int b[n][n];
  int c[n][n];

  
int main()
{
  int i,j,k;
  struct timeval tv1,tv2;
  struct timezone tz;
  double elapsed;
  omp_set_num_threads(omp_get_num_procs());
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      a[i][j]=1;
      b[i][j]=1;
    }
  }
  gettimeofday(&tv1,&tz);
  #pragma omp parallel for private(i,j,k) shared(a,b,c)
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  for(k=0;k<n;k++)
    c[i][j]+=a[i][k]*b[k][j];
  
  gettimeofday(&tv2,&tz);
  
  elapsed=(double)(tv2.tv_sec-tv1.tv_sec)+(double)(tv2.tv_usec-tv1.tv_usec)*1.e-6;
  printf("elapse time=%f secound\n",elapsed);
  
  for (i= 0; i< n; i++)
    {
        for (j= 0; j< n; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
  return 0;
  
  
}

