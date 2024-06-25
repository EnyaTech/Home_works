#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c,d,e, max;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    max = (max>d) ? max : ((d>e) ? d : e);
    printf("%d", max);
	return 0;
}

