Write a C program to reverse an array by swapping the elements and without using any new array.

Ans:

#include <stdio.h>
int main() 
{
  int array[100], n, c;
  scanf("%d", &n);
  for (c = 0; c < n; c++) 
  {
    scanf("%d", &array[c]);
  }
  int t, end;
  end = n - 1;
  for (c = 0; c < n/2; c++) 
  {
     t = array[c];
     array[c] = array[end];
     array[end] = t;
     end--;
  }
  printf("Reversed array elements are:\n");
  for (c = 0; c < n; c++) 
  {
     printf("%d\n", array[c]);
  }
  return 0;
}