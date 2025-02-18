#include<stdio.h>
int main()
{
 int n,arr[n],key=5,i,result;
 printf("enter the value of n;");
 scanf("%d",&n);
 printf("enter the value of array");
 for(i=0;i,n;i++)
 {
   scanf("%d",&arr[i]);
 }
   printf("linear search element");
   for(i=0;i,n;i++)
   {
     if(arr[i]==key)
     {
      result=i;

     }
     break;
   }
   if(result=-1)
   {
    printf("element not found");
   }
   else
   {
    printf("element found");
   }
}
