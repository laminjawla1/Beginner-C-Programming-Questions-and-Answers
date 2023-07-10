#include <stdio.h>

int add_two_numbers(int a, int b);

/**
*main - Entry point of the program
*
*Return: 0
*/
int main(void)
{
	int num1, num2, result;

	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	result = add_two_numbers(num1, num2);
	printf("%d + %d = %d\n", num1, num2, result);
	return (0);
}

/**
*add_two_numbers - Returns the sum of two numbers
*
*@a: Num1
*@b: Num2
*
*Return: Sum of a + b
*/
int add_two_numbers(int a, int b)
{
	return (a + b);
}
