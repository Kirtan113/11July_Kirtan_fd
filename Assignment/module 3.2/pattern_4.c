/*
1
2  3 
4  5  6 
7  8  9  10
11 12 13 14 15 
*/
#include <stdio.h>
void main() 
{
   int rows = 5, i, j, no = 1;
   //printf("Enter the number of rows: ");
   //scanf("%d", &rows);
   for (i = 1; i <= rows; i++) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ", no);
         no++;
      }
      printf("\n");
   }
}
