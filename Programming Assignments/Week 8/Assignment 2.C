//Write a C Program to find power of a given number using recursion. 
#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;

scanf("%d", &num); //The number taken as input from test case data 

scanf("%d", &pow); //The power is taken from the test case 
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}
long power(int x, int y) {
    if (y != 0)
      return (x * power(x, y - 1)); 
    else
      return 1;
}
