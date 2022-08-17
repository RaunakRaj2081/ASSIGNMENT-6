// Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("Given number %d is prime ",n);
    else
    printf("Given number %d is not prime ",n);
    return 0;
    
}

