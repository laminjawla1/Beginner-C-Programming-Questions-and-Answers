#include <stdio.h>
#include <ctype.h>

float to_celsius(float);
float to_fahrenheit(float);

/**
*main - Entry Point to the program
*
*Return: 0 on success
*/
int main(void)
{
	float temp;
	char unit;

	printf("Enter Temperature: ");
	scanf("%f", &temp);
	getchar();
	printf("Enter Unit ([f, c]): ");
	unit = getchar();

	if (tolower(unit) == 'c')
		printf("%.1f fahrenheit = %.1f celsius\n", temp, to_celsius(temp));
	else if (tolower(unit) == 'f')
		printf("%.1f celsius = %.1f fahrenheit\n", temp, to_fahrenheit(temp));
	else
		printf("Invalid Unit\n");

	return (0);
}
/**
*to_celsius - returns the equivalent temperature in celsius
*@temp: Temperature
*Return: Resultant temperature
*/
float to_celsius(float temp)
{
	return ((temp - 32) * 5.0 / 9.0);
}
/**
*to_fahrenheit - returns the equivalent tempersture in fahrenheit
*@temp: Given Temperature
*Return: Resultant Temperature
*/
float to_fahrenheit(float temp)
{
	return ((9 * temp + 160) / 5.0);
}
