#include "main.h"
/**
 * _memcpy - a function that copy a memory area
 * @dest: memory where is stored
 * @src: number where is copied
 * @n: number of bytes
 *
 * Return: copy memory with a bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
