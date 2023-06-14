#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool _isdigit(char *seconds);

/**
*main - Entry point to program
*
*@argc: Argyument Count
*@argv: Argument Vector
*
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int initial_seconds, hours, minutes, final_seconds;

	if (argc != 2)
	{
		printf("Usage: %s <seconds>\n", argv[0]);
		return (1);
	}
	if (!_isdigit(argv[1]))
	{
		printf("Argument must be numeric\n");
		return (2);
	}

	initial_seconds = atoi(argv[1]);
	final_seconds = initial_seconds % 3600;
	hours = initial_seconds / 3600;
	minutes = final_seconds / 60;
	final_seconds %= 60;

	printf("%d seconds has %d hours, %d minutes and %d seconds\n", initial_seconds, hours, minutes, final_seconds);
	return (0);
}
/**
*_isdigit - Checks if a string can be converted to an integer
*
*@seconds: Seconds to checked
*
*Return: true if the string can be converted else false
*/
bool _isdigit(char *seconds)
{
	for (int i = 0; seconds[i]; i++)
		if (!isdigit(seconds[i]))
			return (false);
	return (true);
}
