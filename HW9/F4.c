#include <stdio.h>
void print_digit(char s[])
{
	int num[10] = {0}, i = 0;
	while(s[i] != '.')
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			num[s[i]-'0']++;
		}
		i++;
	}
	for(int i = 0; i<10; i++)
		if(num[i]!=0)
			printf("%d %d\n", i, num[i]);
}

int main(int argc, char **argv)
{
	char s[] = "Hello123 world77.";
	print_digit(s);
	return 0;
}

