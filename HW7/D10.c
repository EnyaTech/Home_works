#include <stdio.h>

int is_prime(int n, int delitel)
{
	static int flag = 0;
	if (n == 1 || flag == 1) return flag = 1;
	if(delitel <= n/2)
	{
		if (n%delitel == 0) 
			return flag = 1;
		else 
			is_prime(n, delitel+1);
	}
	return flag;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	is_prime(a, 2) == 1 ? printf("NO") : printf("YES");
	return 0;
}

