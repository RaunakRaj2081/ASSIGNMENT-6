// Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int i,j,lcm;
    printf("Enter 2 numbers to find its LCM :\n");
    scanf("%d %d",&i,&j);
    for(int k=i;k<=i*j;k++)
    {
        if(k%i==0 && k%j==0)
        {
            lcm=k;
            break;
        }
        
    }
    
    printf("The LCM of %d and %d is %d",i,j,lcm);
    return 0;
}