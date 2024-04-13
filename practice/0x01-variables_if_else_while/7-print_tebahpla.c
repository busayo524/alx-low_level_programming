#include <stdio.h>
/**
 * main - program that prints alp in reverse
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
