#include <stdio.h>

int recurs(int a)
{
	printf("%d ", a%10);
	if(a/10 != 0)
	recurs(a/10);
	return 1;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	recurs(a);
	return 0;
}

