#include <stdio.h>
unsigned long res (int, int);

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	printf("%lu ",res(2, a));
	return 0;
}

unsigned long res(int a, int b)
{
	unsigned long t=1;
	for(int i=1;i<b;i++){
			t=t*a;
		}
	return t;
}
