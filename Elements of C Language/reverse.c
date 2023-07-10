#include <stdio.h>

/**
*main - A program to reverse a number
*
*Return: 0 on success
*/
int main(void)
{
	//Declare the variables
	int n, reverse;

	//Get the number from the user
	printf("Enter a number: ");
	scanf("%d", &n);

	//Set reverse to 0
	reverse = 0;

	//Loop until n <= 0
	while (n > 0)
	{
		//Get the last digit of the number and add it to reverse
		//multiply by 10
		reverse = n % 10 + (reverse * 10);

		//Chop off the used last digit
		n /= 10;
	}

	//Print the reversed number
	printf("Reverse: %d\n", reverse);
	return (0);
}
