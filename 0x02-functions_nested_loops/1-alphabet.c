#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		_putchar(c);

		c++;

	}

	_putchar('\n');
}
