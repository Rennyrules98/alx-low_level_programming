#include "main.h"

/**
 *_strlen - Returns the length of a string
 *@s: The string to find the length of
 *
 *Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 *rev_string - Reverses a string
 *@s: The string to reverse
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

/**
 *_putchar - Writes a character to stdout
 *@c: The character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
