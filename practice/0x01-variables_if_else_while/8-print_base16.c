#include <stdio.h>
/**
 * main - prints all hexadecmals
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int hexadec;

	for (hexadec = 0; hexadec <= 9; hexadec++)
	{
		putchar(hexadec);
		for (hexadec = 'a'; hexadec <= 'f'; hexadec++)
		{
			putchar(hexadec);
		}
	}
	putchar('\n');
	return (0);
}
