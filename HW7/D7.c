#include <stdio.h>

int recurs(int a)
{
	printf("%d ", a);
	if(a>1)
	recurs(a-1);
	return 1;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	recurs(a);
	return 0;
}

