//Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm.
#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
int first, last, mid;
   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (array[mid] < search)
         first = mid+1;
      else if (array[mid] == search) {
         printf("%d found at location %d.", search, mid+1);
         break;
      }
      else
         last = mid - 1;

      mid= (first + last)/2;
      }
   if (first > last)
      printf("Not found! %d isn't present in the list.", search);

     return 0;
      }
