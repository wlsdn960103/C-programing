#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,sum=0;
  
  for(i=1;i<=100;i++)
  {
     if(sum>=500)
       break;
     sum+=i;
     printf("i=%d  sum=%d",i,sum);
  }
  printf("i=%d  sum=%d",i-1,sum);
  system("PAUSE");	
  return 0;
}
