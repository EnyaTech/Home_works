#include <stdio.h>

int abs(int a)
	{
	return a=-a; 	
	}
int main(int argc, char **argv)
{
	int a;
	scanf ("%d", &a);
	(a>0)?a:abs(a);
	printf("%d",abs(a));
	return 0;
}

