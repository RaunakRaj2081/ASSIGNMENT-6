// Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i<=2*n;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of first %d even numbers is %d",n,sum);
    return 0;
}