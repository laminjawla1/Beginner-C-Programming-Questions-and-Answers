#include <stdio.h>

/**
* _pow - Calculates the base raise to the power of exp
*
*@base: Base
*@exp: Exponent
*
*Return: base ^ exp
*/
int _pow(int base, int exp)
{
	int p = 1;

	for (int i = 0; i < exp; i++)
		p *= base;
	return (p);
}

/**
* main - Entry point
*
*Return: 0 on success
*/
int main(void)
{
	//Declare variables
	int base, exp;

	//Prompt and get the base and exponent from the user
	printf("Enter base and power separated by a space: ");
	scanf("%d %d", &base, &exp);

	printf("%d^%d = %d\n", base, exp, _pow(base, exp));
	return (0);
}
