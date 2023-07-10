#include <stdio.h>

/**
*get_grade - Gets the grade of a student
*
*@score: The score to be checked
*
*Return: 0 on success
*/
char get_grade(float score)
{
	if (score >= 90)
		return ('A');
	else if (score >= 70)
		return ('B');
	else if (score >= 50)
		return ('C');
	else
		return ('F');
}

/**
*main - Entry point
*
*Return: 0 on success
*/
int main(void)
{
	float score;
	char grade;

	printf("Enter your score: ");
	scanf("%f", &score);

	grade = get_grade(score);
	
	printf("Your score is an/a [%c]\n", grade);
	return (0);
}
