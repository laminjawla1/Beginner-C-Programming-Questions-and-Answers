#include <stdio.h>
#include <limits.h>

/**
*find_max - Finds the max between two numbers
*
*@a: First number
*@b: Second number
*
*Return: The max or INT_MIN
*/
int find_max(int a, int b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	else
		return (INT_MIN);
}

/**
*main - Entry point to program
*
*Return: 0 on success
*/
int main(void)
{
	//Declare your variables
	int num1, num2, max;

	//Get the numbers from the user
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	//Find the max or equilibrium
	max = find_max(num1, num2);
	
	//Logic
	if (max == INT_MIN)
		printf("The numbers are the same\n");
	else
		printf("Max is: %d\n", max);
	return (0);
}
