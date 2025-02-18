#include<stdio.h>
int main()
{
 int x;
 printf("enter x:");
 scanf("%d",&x);
 x+=1;
 printf("\nadd=%d",x);
 x-=1;
 printf("\nsub=%d",x);
 x*=1;
 printf("\nmul=%d",x);
 x/=1;
 printf("\ndiv=%d",x);
 x%=1;
 printf("\nmod=%d",x);
 return 0;
}
