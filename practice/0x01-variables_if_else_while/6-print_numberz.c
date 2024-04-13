#include <stdio.h>
/**
 * main - prints all single digit of base 10
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 <= 9; base_10++)
	{
		printf("%d", base_10);
	}
	putchar('\n');
	return (0);
}
