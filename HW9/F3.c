#include <stdio.h>
void r()
{
	char a;
	int num[10]={0};
	while((a=getchar()) != '\n')
	{
		num[a-'0']++;
	}
	for(int i=0;i<10; i++)
		if(num[i]!=0)
			printf("%d %d\n", i, num[i]);
}

int main(int argc, char **argv)
{
	r();
	return 0;
}

