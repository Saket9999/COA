#include<stdio.h>


int main()
{

  char name[20]; 
  int num;
  FILE *f;
  
  f=(fopen("C:\\Users\\student\\Documents\\file.txt","w"));
  
  if(f==NULL)
  {
    printf("error");
    return 0;
  }
  
  printf("Enter Number Of Student:");
  scanf("%d",&num);
  
  for(int i=0;i<num;i++)
  {
  printf("For Student %d\nEnter the name:",i+1);
  scanf("%s",&name);
  
  fprintf(f,"\nName: %s",name);
  }
  fclose(f);
  printf("Completed");
  return 0;
}