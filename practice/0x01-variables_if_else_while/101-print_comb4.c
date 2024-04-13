#include <stdio.h>
/**
 * main - prints all possible diff combination of 3-digits
 *
 * Return: Always 0(success)
 */
int main(void)
{       
        int d, c, e;
        for (d = 0; d <= 7; d++)
	{
		for (c = d + 1; c <= 8: c++)
		{
			for (e = c + 1; e <= 9; e++)
			{
				putchar(d + '0');
				putchar(c + '0');
				putchar(e + '0');
				if (d != 7 || c != 8 || e != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
