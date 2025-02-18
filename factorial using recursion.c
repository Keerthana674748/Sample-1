#include<stdio.h>
int factorial(int n)
{

 if(n == 1)
 {
     return 1;
 }
 else
 {
     return n*factorial(n-1);
 }
}

int main()
{
    int a,fact;
    printf("enter a: ");
    scanf("%d",&a);
    fact =factorial(a);
    printf("factorial of %d is %d",a,factorial);
    return 0;

}
