Write a Program to find the sum of all even numbers from 1 to N where the value of N is taken as input.

#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N);
for(int i=2;i<=N;i=i+2){
  sum += i;
}
printf("Sum = %d",sum);
}
