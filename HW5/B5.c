#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,c=0;
	scanf ("%d", &a);
	
	while(a>0)
	{
	c+=a%10;
	a/=10;
	}
	printf("%d",c);
	return 0;
}
