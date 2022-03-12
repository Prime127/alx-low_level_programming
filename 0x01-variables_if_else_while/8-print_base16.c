#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char C = 'a';

	while (C <= 'f')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
