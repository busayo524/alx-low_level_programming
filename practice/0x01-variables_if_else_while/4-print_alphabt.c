#include <stdio.h>
/**
 * main -  - pnts the alphabeth in lower case except alphabeth q and e
 *
 * Return: always 0(success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		else
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
