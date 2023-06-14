#include <stdio.h>

#define PI 3.14159265359

float calc_area(float radius);

/**
*main - Entry to the program
*
*Return: 0 on success
*/
int main(void)
{
	float radius, area;

	printf("Enter Radius: ");
	scanf("%f", &radius);

	area = calc_area(radius);
	printf("Area of a circle with radius %.1f is %.1f\n", radius, area);
	return (0);
}

/**
*calc_area - calculates and return the area of a circle
*
*@radius: Radius
*
*Return: Area of a cicle
*/
float calc_area(float radius)
{
	return (PI * radius * radius);
}
