#include <stdlib.h>
/**
* string_nconcat - concatenates strings
* @s1: string one
* @s2: string two
* @n: length of s2
* Return: output else null if output is null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int lens1 = 0, lens2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lens1] !=  '\0')
	{
		lens1++; /*finds length of s1*/
	}
	while (s2[lens2] != '\0')
	{
		lens2++;
	}
	if (n > lens2)
	{
		n = lens2; /* finds length if n is greater the*/
	}
	output = malloc(sizeof(char) * (lens1 + n + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		output[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		output[lens1 + i] = s2[i];
	}
	output[lens1 + n] = '\0';
		return (output);
}
