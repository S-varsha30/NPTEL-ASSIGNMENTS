Write a C program to check whether a given number (N) is a perfect number or not.

#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N);
    int sum = 0;
    for(int i = 1 ; i < N ; i++)   
    {   
       if(N% i == 0)   
       sum+=i;   
    }    
    if (sum == N)   
       printf("%d is a perfect number.", N) ;   
    else   
       printf("%d is not a perfect number.", N) ;   
    return 0 ;   
}
