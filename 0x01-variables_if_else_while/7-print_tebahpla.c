#include <stdio.h>
/**
*main -lowercase alphabets
*Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
