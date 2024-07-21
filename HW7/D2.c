#include <stdio.h>

int recurs(int a)
{
	static int s=0;
	s+=a;
	if (a>0)
	recurs(a-1);
	return s;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	printf("%d",recurs(a));
	return 0;
}
