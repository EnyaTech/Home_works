#include <stdio.h>


int middle (int a, int b)
	{
	a=(a+b)/2;
	return a; 	
	}
int main(int argc, char **argv)
{
	int a,b;
	scanf ("%d%d", &a,&b);
	printf("%d",middle(a,b));
	return 0;
}
