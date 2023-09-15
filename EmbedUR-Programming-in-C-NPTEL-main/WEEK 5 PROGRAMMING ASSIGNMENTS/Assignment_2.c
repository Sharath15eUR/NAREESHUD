/*Write a C program to count total number of digits of an Integer number (N).*/

#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/
    int temp02, no_of_digit; 
    no_of_digit=0;
    temp02=N;
    while(temp02 > 0)
    {
        no_of_digit+=1;
        temp02/=10;
    }
    printf("The number %d contains %d digits.",N,no_of_digit);
    return 0;
}
