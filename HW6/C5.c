#include <stdio.h>
int fct(int a)
{
	int b =0;
	for(int i=0;i<=a;i++)
	{
		b=b+i;
	}
	return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    a=fct(a);
    printf("%d",a);
    return 0;
}
