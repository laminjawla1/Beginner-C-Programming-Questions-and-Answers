#include <stdio.h>
#include <limits.h>

/**
*find_max - Finds the max between four numbers
*
*@a: First number
*@b: Second number
*@c: Third number
*@d: Fourth
*
*Return: The max or INT_MIN
*/
int find_max(int a, int b, int c, int d)
{
	if (a > b && a > c && a > d)
		return (a);
	else if (b > a && b > c && b > d)
		return (b);
	else if (c > a && c > b && c > d)
		return (c);
	else if (d > a && d > b && d > c)
		return (d);
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
	int num1, num2, num3, num4, max;

	//Get the numbers from the user
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	//Find the max or equilibrium
	max = find_max(num1, num2, num3, num4);
	
	//Logic
	if (max == INT_MIN)
		printf("The numbers are the same\n");
	else
		printf("Max is: %d\n", max);
	return (0);
}
