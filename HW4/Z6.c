#include <stdio.h>

int main(int argc, char **argv)
{
	int a, s, d, e,max;
    scanf("%d", &a);
    s=a/100;
	d=(a%100)/10;
	e=(a%100)%10;
    max = (s>d) ? ((s>e) ? s : e) : ((d>e) ? d : e);
    printf("%d",max);
	return 0;
}

