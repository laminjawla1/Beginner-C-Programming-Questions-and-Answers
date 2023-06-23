#include <stdio.h>

int is_even_odd(int n);

/**
*main - A program to print even or odd depending on the number entered
*
*Return: 0 on success
*/
int main(void)
{
	//Declare your variable
	int number;

	//Get the number from the user
	printf("Enter a number: ");
	scanf("%d", &number);

	if (is_even_odd(number))
		printf("[%d] is odd\n", number);
	else
		printf("[%d] is even\n", number);

	return (0);
}
/**
*is_even_odd - Checks if a number even or odd
*
*@n: Number to checked
*Return: 1 or 0
*/
int is_even_odd(int n)
{
	return (n % 2);
}
