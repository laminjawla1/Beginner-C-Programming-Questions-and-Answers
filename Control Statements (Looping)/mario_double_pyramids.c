#include <stdio.h>

/**
* main - A program to print adjacent mario pyramids
*
*Return: 0 on success
*/
int main(void)
{
	//Declare your variables
	int height, rows, columns, spaces;
	char cell = '#';
	char *separator = "  ";

	//Prompt and get the height from the user
	printf("Enter Height: ");
	scanf("%d", &height);

	//Canvas for the pyramid
	for (rows = 0; rows < height; rows++)
	{
		//Print height - rows - 1 spacess
		for (spaces = 0; spaces < height - rows - 1; spaces++)
			putchar(' ');
		//Print rows + 1 hashes
		for (columns = 0; columns <= rows; columns++)
			putchar(cell);
		//Separate the two pyramids
		printf("%s", separator);
		
		//Print the adjacent pyramid
		for (columns = 0; columns <= rows; columns++)
			putchar(cell);
		//Print the newline
		putchar('\n');
	}
	return (0);
}
