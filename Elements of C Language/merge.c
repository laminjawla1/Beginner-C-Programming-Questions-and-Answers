#include <stdio.h>

int merge_numbers(int n1, int n2, int n3);

/**
* main - A program to merge three numbers
*
*Return: 0 on success
*/
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers separated by a space: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	int number = merge_numbers(num1, num2, num3);
	printf("Number: %d\n", number);
	return (0);
}
/**
* merge_numbers - Merge three numbers
*
*@n1: Num1
*@n2: Num2
*@n3: Num3
*
*Return: Merged number
*/
int merge_numbers(int n1, int n2, int n3)
{
	int number = 0;

	number =  number * 10 + n1;
	number =  number * 10 + n2;
	number =  number * 10 + n3;

	return (number);
}
