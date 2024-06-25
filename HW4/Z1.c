#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, min, max;
    scanf("%d%d", &a, &b);
    max = (a>b) ? a : b;
    min = (a<b) ? a : b;
    printf("%d %d", min, max);
	return 0;
}

