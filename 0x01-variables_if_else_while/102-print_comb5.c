#include <stdio.h>

/**
 * main - Entry point
 * Discription: 'prints all possible combinations of two two_digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int i, j

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i > j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putcher((j / 10) + 48);
				putcher((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}