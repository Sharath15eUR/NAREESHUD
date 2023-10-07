/*Write a C program to find the root of the equation using bisection method for different values of allowable error of the root?*/

Ans:

#include<stdio.h>
float fun (float x);
void bisection (float *x, float a, float b, int *itr); 

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1;
    scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);
    do
    {
        if (fun(a)*fun(x) < 0)
            b=x;
        else
            a=x;
        bisection (&x1, a, b, &itr);
        if (((x1-x) < 0 && -(x1-x) <  allerr) || ((x1-x) > 0 && (x1-x) < allerr))
        {
            printf("Root = %1.4f", x1);
            return 0;
        }
        x=x1*1;
    }
    while (itr <  maxmitr);
    return 1;
}
float fun (float z)
{
    return (z*z*z*2 - z*3*1 - 5);
}
void bisection (float *x3, float a, float b, int *itr)
{
    *x3=(a+b)/2;
    ++(*itr);
} 