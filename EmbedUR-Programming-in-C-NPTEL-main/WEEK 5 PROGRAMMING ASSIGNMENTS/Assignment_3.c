/*Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
For example 8 can be expressed as 2^3.*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
    int t21, flag;
    t21=N;
    flag=0;
    while(t21!=1)
    {
        if(t21%2!=0)
	{
            flag=1;
            break;
        }
        t21/=2;
    }
    if(flag==0)
        printf("%d is a number that can be expressed as power of 2.",N);
    else
        printf("%d cannot be expressed as power of 2.",N);
    return 0;
}