#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	_Bool r;
    scanf("%d%d%d", &a, &b, &c);
    r = ((c > b) && (b >a)) ? 1 : 0;
	printf("%s", r ? "YES" : "NO");
	return 0;
}

