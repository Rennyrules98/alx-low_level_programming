#include "main.h"

/**
 *_strlen - Calculate the length of a string
 *@s: Pointer to the string
 *
 *Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

int _is_palindrome_helper(char *s, int len);

/**
 *is_palindrome - Check if a string is a palindrome
 *@s: Pointer to the string
 *
 *Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_is_palindrome_helper(s, len));
}

/**
 *_is_palindrome_helper - Helper function for is_palindrome
 *@s: Pointer to the string
 *@len: Length of the string
 *
 *Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int len)
{
	/*Base case: an empty string or a string with one character is a palindrome */
	if (len <= 1)
		return (1);

	/*Check if the first and last characters match */
	if (s[0] == s[len - 1])
	{
		/*Recursively check the substring without the first and last characters */
		return (_is_palindrome_helper(s + 1, len - 2));
	}

	/*If the first and last characters don't match, it's not a palindrome */
	return (0);
}
