#include <stdio.h>

/**
 * main - A program to calculate the factorial of a number
 * 
 * Return: 0 on success
*/
int main(void)
{
    //Declare variables
    unsigned int num;
    long long factorial;

    //Prompt and get the number from the user
    printf("Enter number: ");
    scanf("%d", &num);

    //Set factorial to 1 and loop from 1 to num
    //On each iteration, multiply factorial by the current value of i
    factorial = 1;
    for (unsigned int i = 1; i <= num; i++)
        factorial *= i;
    
    //Print the factorial
    printf("The factorial of %d = %ld\n", num, factorial);

    return (0);
}