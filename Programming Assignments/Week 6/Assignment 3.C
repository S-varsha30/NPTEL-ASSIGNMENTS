Write a program to find the factorial of a given number using while loop.

#include<stdio.h>
void main()
{
    int n;
    long int fact; 
    scanf("%d",&n);
    int i;
    i=fact=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The Factorial of %d is : %ld",n,fact);
}
