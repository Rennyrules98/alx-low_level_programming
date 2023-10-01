#include "main.h"

/**
 *_strlen - Calculate the length of a string
 *@s: Pointer to the string
 *
 *Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 *is_palindrome - Check if a string is a palindrome
 *@s: Pointer to the string
 *
 *Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = _strlen(s) - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0); /*Not a palindrome */
		}

		start++;
		end--;
	}

	return (1); /*Palindrome */
}
