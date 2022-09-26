
Bodundeft
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/3-strspn.c

Your Name Even more pointers, arrays and strings_3-strspn.c
 1 contributor
28 lines (26 sloc)  460 Bytes
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
