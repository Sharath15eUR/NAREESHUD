Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.

#include <stdio.h>
int main()
{
    int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    scanf("%d",&row);
    scanf("%d",&col); 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }
    for(int iip=0; iip < row; iip++)
    {
        for(int kk=0; kk < col; kk++)
        {
    
            matrix_C[iip][kk] = matrix_A[iip][kk] - matrix_B[iip][kk];
        }
    }

    for(i=0; i < row; i++)
    {
        for(j=0; j < col; j++)
        {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }
    return 0;
}