#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%s",((a*b*c > 0 && a+b > c && a+c > b && b+c > a)) ? "YES" : "NO" );
	return 0;
}

