#include<stdio.h>
int main()
{
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  avg(n);
  return 0;
}
  int avg(int n)
  {
   int i,sum=0,value[i],avg;
   for(i=0;i<n;i++)
   {
    printf("find the value of sum:");
    scanf("%d",&sum);
    sum+=value[i];
   }
    avg=sum%n;
    return avg;
  }
