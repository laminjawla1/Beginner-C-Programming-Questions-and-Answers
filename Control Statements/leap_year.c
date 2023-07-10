#include <stdio.h>

/**
*is_leap_year - Checks if a year is leap or not
*
*@year: The year to be checked
*
*Return: True of False
*/
int is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

/**
*main - Engine
*
*Return: 0 on success
*/
int main(void)
{
	//Declare your variables
	int year;
	
	//Get the year from the user
	printf("Enter year: ");
	scanf("%d", &year);

	if (is_leap_year(year))
		printf("[%d] is a leap year\n", year);
	else
		printf("[%d] is not a leap year\n", year);
	return (0);
}
