#include "shell.h"

/**
 * _strlen - return length of a string
 * @s: string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * _strcmp -comparison of 2 string
 * @s1: string1
 * @s2: string2
 *
 * Return: int val
 */

inf _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);

}


/**
 * starts_with - function
 * @haystack: string
 * @needle: sub string
 *
 * Return: char ptr
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}


/**
 * _strcat - concatenates 2 string
 * @dest: dest buffer
 * @src: the source buffer
 *
 * Return: pointer to des buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

































