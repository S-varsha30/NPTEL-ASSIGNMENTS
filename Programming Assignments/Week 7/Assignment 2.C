//Write a C program to find the sum of all elements of each row of a matrix.
#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) 
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
int sum=0;
for(int i=0;i<r;i++){
  sum=0;
  for(int j=0;j<c;j++){
    sum+=matrix[i][j];
  }
  if(i!=0) printf("\n");
  printf("%d",sum);
}
return 0;
}
