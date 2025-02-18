#include<stdio.h>
int main()
{
 int i,low,high,mid,n,key,array[100];
 printf("enter no. of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&array[i]);
  printf("enter the value of n:");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while(low<=high)
  mid=(low+high)/2;
  if(array[mid],key)
  low=mid+i;
  else if(array[mid]==key){
  printf("%d found at location %d.n",key,mid+1);
  break;
  }
  else
   high=mid-1;

  }
  if(low>high)
  printf("not found!%d isn't present in the list.n",key);
  return 0;

}
