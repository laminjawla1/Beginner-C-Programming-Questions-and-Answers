#include <stdio.h>
#include <limits.h>

/**
*find_max - Finds the max between three numbers
*
*@a: First number
*@b: Second number
*@c: Third number
*
*Return: The max or INT_MIN
*/
int find_max(int a, int b, int c)
{
	if (a > b && a > c)
		return (a);
	else if (b > a && b > c)
		return (b);
	else if (c > a && c > b)
		return (c);
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
	int num1, num2, num3, max;

	//Get the numbers from the user
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	//Find the max or equilibrium
	max = find_max(num1, num2, num3);
	
	//Logic
	if (max == INT_MIN)
		printf("The numbers are the same\n");
	else
		printf("Max is: %d\n", max);
	return (0);
}
