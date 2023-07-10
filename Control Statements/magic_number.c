#include <stdio.h>

/**
*reverse_number - Reverses the given number
*
*@n: Number to be reversed
*
*Return: The reversed number
*/
int reverse_number(int n)
{
	int rev = 0;

	while (n > 0)
	{
		rev = n % 10 + (rev * 10);
		n /= 10;
	}
	return (rev);
}

/**
*is_magic_number - Checks if n1 == n2
*
*@n1: First number
*@n2: Second number
*
*Return: True or False
*/
int is_magic_number(int n1, int n2)
{
	return (n1 == n2);
}

/**
* main - Entry point
*
*Return : 0 on success
*/
int main(void)
{
	//Declare your variables
	int number, reversed;

	//Prompt and get the number from the user
	printf("Enter number: ");
	scanf("%d", &number);

	//Reverse the number and store it in reversed
	reversed = reverse_number(number);

	//Check
	if (is_magic_number(number, reversed))
		printf("[%d] is a magic number\n", number);
	else
		printf("[%d] is not a magic number\n", number);
	return (0);
}
