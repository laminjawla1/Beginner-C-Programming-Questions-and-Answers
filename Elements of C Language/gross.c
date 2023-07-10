#include <stdio.h>

/**
 * main - A program to calculate the gross salary of an employee
 * 
 * Return: 0 on success
*/
int main(int argc, char const *argv[])
{
    // Declare the variables
    double basic, gross, da, hra;

    // Prompt and get the basic salary from the user
    printf("Enter basic salary: ");
    scanf("%lf", &basic);

    // Calculate the da and hra
    da = (40.0 / 100.0) * basic;
    hra = (20.0 / 100.0) * basic;

    // Calculate the gross
    gross = basic + da + hra;

    // Output
    printf("Basic: %.2lf\nDA: %.2lf\nHRA: %.2lf\nGROSS: %.2lf\n", basic, da, hra, gross);
    return 0;
}
