/*Write a C program to sort a 1D array using pointer by applying Bubble sort technique.*/

Ans:

#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); 
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }

    sort(a, n); // Calling the sorting function
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}
void sort(int *a, int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(*(a+j)>=*(a+j+1))
           {
               temp = *(a+j);
               *(a+j)= *(a+j+1);
               *(a+j+1)= temp;
           }
        }
    }
}