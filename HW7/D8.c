#include <stdio.h>

int recurs(int a, int b)
{
	if(a>b)
		{
		printf("%d ", a);
		recurs(a-1,b);
		}
	if (a<b)
		{
		printf("%d ", a);
		recurs(a+1,b);
		}
	if(a==b) 
		printf("%d", a);
	return 1;
}

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d %d", &a, &b);
	recurs(a,b);
	return 0;
}

