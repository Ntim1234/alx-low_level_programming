#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int t;
	char c;

	for (t = 0; t <= 9; t++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
