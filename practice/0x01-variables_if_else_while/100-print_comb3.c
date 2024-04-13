#include <stdio.h>
/**
 * main - prints all possible diff combinations of 2-digits
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int d, c;

	for (d = 0; d <= 8; d++)
	{
		for (c = d + 1; c <= 9; c++)
		{
			putchar(d + '0');
			putchar(c + '0');
			if (d != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
