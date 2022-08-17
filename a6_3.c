// Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of first %d odd numbers is %d",n,sum);
    return 0;
}