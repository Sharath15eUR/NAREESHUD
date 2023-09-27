Write a C program to search a given element from a 1D array and display the position at which it is found by using linear search function. The index location starts from 1.

Ans:

#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   scanf("%d", &n); 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]); 
   scanf("%d", &search);
   position = linear_search(array, n, search);

   if (position == -1)
      printf("%d is not present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
   return 0;
}

int linear_search(int a[], int n, int find) {
   int cdc;
   for (cdc = 0 ;cdc < n ; cdc++ )
   {
      if (a[cdc] == find)
      return cdc;
   }
   return -1;
} 