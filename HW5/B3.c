#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,c,b;
	scanf ("%d%d", &a,&b);
	for(int i=a;i<=b;i++)
	{
	c=c+i*i;
    }
    printf("%d ",c);
	return 0;
}
