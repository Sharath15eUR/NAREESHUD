/*Write a C program to find sum of following series where the value of N is taken as input

 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N*/


#include<stdio.h>
int main()
{
   int N;
   float sum = 0.0;
   scanf("%d",&N);
   for(int y=1;y <= N;y++)
   {	
       sum+=1.0/y;
   }
   printf("Sum of the series is: %.2f",sum);
   return 0;
} 