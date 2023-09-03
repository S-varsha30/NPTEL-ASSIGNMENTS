Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.

#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int tempNum,flag;
    tempNum=N;
    flag=0;
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
    if(flag==0)
        printf("%d is a number that can be expressed as power of 2.",N);
    else
        printf("%d cannot be expressed as power of 2.",N);
    return 0;
}
