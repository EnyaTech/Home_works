#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	float d;
	scanf ("%d%d%d", &a,&b,&c);
	d=((float)(a+b+c))/3;
	printf("%.2f\n",d);
	return 0;
}
