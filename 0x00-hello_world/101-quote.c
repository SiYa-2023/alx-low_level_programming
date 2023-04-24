#include <unistd.h>

/**
 * main - Prints a quote to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	const char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quote) - 1;
	ssize_t written;

	written = write(STDERR_FILENO, quote, len);
	return (written == len ? 1 : -1);
}
