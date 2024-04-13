#include <stdio.h>
/**
 * main - prints all base ten digits
 *
 * Return: always 0(success)
 */
int main(void)
{
	int base_10;

	for (base_10 = '0'; base_10 <= '9'; base_10++)
	{
		putchar(base_10);
	}
	putchar('\n');
	return (0);
}
