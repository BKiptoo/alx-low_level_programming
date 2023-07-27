#include "main.h"
/**
 * rot13 - encode string in rot13
 * @s: pointer to a string
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j], j = 52;
			}
		}
		i++;
	}
	return (s);
}
