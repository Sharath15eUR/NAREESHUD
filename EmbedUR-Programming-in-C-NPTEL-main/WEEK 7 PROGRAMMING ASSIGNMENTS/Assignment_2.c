Write a C program to find the sum of all elements of each row of a matrix.

#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;
    scanf("%d",&r); 
    scanf("%d",&c);  
    for(i=0;i< r;i++) 
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
    int final;
    for(i=0;i<r;i++)
    {
        final=0;
        for(j=0;j<c;j++)
        {
            final+=matrix[i][j];
        }
        printf("%d\n",final);
    }
    return 0; 
}