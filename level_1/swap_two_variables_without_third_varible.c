#include <stdio.h>

/**
*main - Swapping the values of two variables without using a third variable
*
*Return: 0 on success
*/
int main(void)
{
	int a = 1, b = 2, t;

	printf("Before swap a = %d and b = %d\n", a, b);
	
	/*Swapping*/
	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swap a = %d and b = %d\n", a, b);
	return (0);
}
