#include <stdio.h>
#include <math.h>


int p (int a, int b)
	{
	a=pow(a,b);
	return a; 	
	}
int main(int argc, char **argv)
{
	int a,b;
	scanf ("%d%d", &a,&b);
	printf("%d",p(a,b));
	return 0;
}

