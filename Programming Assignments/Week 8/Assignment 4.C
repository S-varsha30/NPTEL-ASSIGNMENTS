//Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI
#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
int length = strlen(str1);
int i=0;
reverse(str1,length,i);
printf("The string after reversing is: %s\n", str1); 
return 0;
}
void reverse(char word[],int length,int x) {
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}
