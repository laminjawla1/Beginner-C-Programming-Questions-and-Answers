#include <stdio.h>

/**
*main - A program to print the table of n
*
*Return: 0 on success
*/
int main(void)
{
	//Declare n
	int n;

	//Prompt and get n from the user
	printf("Enter N: ");
	scanf("%d", &n);

	//Print the table of n
	for (int i = 1; i <= 12; i++)
		printf("%d x %d = %d\n", i, n, i * n);
	return (0);
}
