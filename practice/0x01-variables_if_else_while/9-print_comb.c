#include <stdio.h>
/**
 * main - print all single digits in ascending order
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int single_dg;

	for (single_dg = 0; single_dg <= 9; single_dg++)
	{
		putchar(single_dg + '0');
		if (single_dg < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
