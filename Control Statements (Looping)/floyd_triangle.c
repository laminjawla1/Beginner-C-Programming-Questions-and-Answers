#include <stdio.h>

/**
* main - A program to print the floyd's triangle
*
*Return: 0 on success
*/
int main(void)
{
	//Declare your variables
	int height, cell, i, j;

	//Prompt and get the height of the triangle from the user
	printf("Enter HeightL: ");
	scanf("%d", &height);

	//Set cell = 1
	cell = 1;

	//Print the triangle
	for (i = 0; i < height; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", cell);
			cell++;
		}
		printf("\n");
	}
	return (0);
}
