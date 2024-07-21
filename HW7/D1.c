#include <stdio.h>

int recurs(int a)
{
	if (a>1)
	recurs(a-1);
	printf("%d ",a);
	return 1;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	recurs(a);
	return 0;
}

