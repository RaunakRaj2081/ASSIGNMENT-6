// Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int i,n,ndigits=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ndigits++;
    }
printf("The number of digits in above number is %d",ndigits);
return 0;
}