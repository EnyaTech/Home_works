#include <stdio.h>

int recurs()
{
	char c;
	c = getchar();
	if(c!='.')
	{
	recurs();
	putchar(c);
	}
	return 1;
}

int main(int argc, char **argv)
{
	recurs();
	return 0;
}

