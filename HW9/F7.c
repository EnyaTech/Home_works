#include <stdio.h>
  int compression(int a[], int b[], int N)
{
	int a_n = 1, b_n = 0;
	if (a[0] == 1)
		b[b_n++] = 0;
	for(int i = 1; i < N; i++)
	{
		if (a[i-1] == a[i])
		{
			a_n++;
		}
		else
		{
			b[b_n++] = a_n;
			a_n = 1;
		}
	}
	b[b_n++] = a_n;
	return b_n;
}

int main(int argc, char **argv)
{
	
}

