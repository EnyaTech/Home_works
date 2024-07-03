#include <stdio.h>
int res (int, int);

int main(int argc, char **argv)
{
	int n,p;
	scanf("%d%d", &n,&p);
	printf("%d\n ",res(n, p));
	return 0;
}

int res(int n, int p)
{
	int r=0,res=0, i=1;
	while (n>0)
	{
	r= n%p;
	res=res+(r*i);
	i*=10;
	n/=p;	
	}
	return res;
}
