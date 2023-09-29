//Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string.
#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  
for(int i=0;ch[i]!='\0';i++){
  if((ch[i]>=65) && (ch[i]<=90)){
    upper++;
  }
  else if((ch[i]>=97) && (ch[i]<=122)){
    lower++;
  }
  else{
  }
  
}
printf("Uppercase Letters : %d\n", upper);
   printf("Lowercase Letters : %d", lower); 
 
   return (0);
}
