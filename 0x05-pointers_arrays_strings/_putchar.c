#include <stdio.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return (fwrite(&c, 1, 1, stdout));
}	
