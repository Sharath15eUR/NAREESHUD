/*Write a C program to check if a given Number is zero or Positive or Negative Using if...else statement.*/

#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
    if(number<0)
    	printf("Negative number.");
    else if(number>0)
    	printf("Positive number.");
    else 
    	printf("The number is 0.");
    return 0;
}