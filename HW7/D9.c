#include <stdio.h>

int sum_digits(int n)
{
	static int sum =0;
	sum+=n%10;
	if (n/10>0) sum_digits(n/10);
	return sum;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	printf("%d", sum_digits(a));
	return 0;
}

