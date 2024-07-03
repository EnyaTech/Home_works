#include <stdio.h>
int f1(int a)
{
	a=a*a;
	return a;
}
int f2(int a)
{
	a=a*a+4*a+5;
	return a; 	
}
int main()
{
    int a=1,b,m=0;
    while( a!=0)
    {
		scanf("%d",&a);
		if(a>=-2 && a<2)b=f1(a);
		if(a>=2)b=f2(a);
		if(a<-2) b=4;
		if(b>m) m=b;
	}
    printf("%d",m);
    return 0;
}
