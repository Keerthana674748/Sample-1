#include<stdio.h>
int main()
{
    int num,rightshift,leftshift;
    printf("enter an integer:");
    scanf("%d",&num);
    leftshift=num<<4;
    rightshift=num>>3;
    printf("original number:%d\n",num);
    printf("leftshift:%d\n",leftshift);
    printf("rightshift:%d\n",rightshift);
    return 0;
}
