#include <stdio.h>

/**
 * main - A program to print the single mario pyramid
 * 
 * Return: 0 on success
*/
int main(void)
{
    //Declare your variables
    int height, rows, columns, space;
    char cell;

    //Prompt and get the height from the user
    printf("Height: ");
    scanf("%d", &height);

    //Set cell to a character to be printed
    cell = '#';

    for (rows = 0; rows < height; rows++)
    {
        //Print height - rows - 1 hashes
        for (space = 0; space < height - rows - 1; space++)
        {
            putchar(' ');
        }
        //Print the hashes
        for (columns = 0; columns <= rows; columns++)
        {
            putchar(cell);
        }
        //Print a newline
        putchar('\n');
    }
    return (0);
}