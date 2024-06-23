#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,s,d,e,sum;
	scanf ("%d", &a);
	s=a/100;
	d=(a%100)/10;
	e=(a%100)%10;
	sum=s*d*e;
	printf("%d\n",sum);
	return 0;
}

