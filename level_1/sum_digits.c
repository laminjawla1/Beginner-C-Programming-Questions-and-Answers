#include <stdio.h>

/**
*main - A program to sum the individual digits of a number
*
*Return: 0 on success
*/
int main(void)
{
	int n, temp, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;

	while (temp > 0)
	{
		sum += temp % 10;
		temp /= 10;
	}
	printf("Sum of the individual digits of %d is %d\n", n, sum);
	return (0);
}
