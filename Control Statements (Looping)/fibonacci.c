#include <stdio.h>

/**
 * fib - Calculates the fib of n
 * 
 * @n: Number to be computedd
 * Return: The fib(n)
*/
int fib(int n)
{
    // Base case
    if (n <= 1)
        return (n);
    return (fib(n -1) + fib(n - 2));
}

/**
 * main - Entry point to the program
 * 
 * Return: 0 on success
*/
int main(void)
{
    // Variables
    int n, i;

    // Prompt and get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the series
    printf("Series: ");
    for (i = 0; i < n; i++)
    {
        if (i < (n - 1))
            printf("%d, ", fib(i));
        else
            printf("%d", fib(i));
    }
    return (0);
}