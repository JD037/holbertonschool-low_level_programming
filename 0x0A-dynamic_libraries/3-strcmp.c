#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return:0 if s1 and s2 are equal, less than 0 if s1 is less than s2,
 * greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] == s2[a] && s1[a]; a++)
		;

	return (s1[a] - s2[a]);
}
