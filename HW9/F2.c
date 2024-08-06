#include <stdio.h>
enum {size=20};
int a[size];

void In(int a[], int size)
{
	for(int i = 0; i<size; i++)
		scanf("%d", &a[i]);
}

 
void sort_even_odd(int n, int a[])
{
	int iChet = 0, b;
	for (int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && i == iChet)
		{
			iChet = i + 1;
		}
		else if(a[i] % 2 == 0 && i > iChet)
		{
			b = a[i];
			for (int j = i-1; j >= iChet; j--)
			{
				a[j+1] = a[j];
			}
			a[iChet++] = b;
		}
	}
}
 void prn(int *a, int size)
 {
	 for(int i = size; i>0; i--)
		printf("%d ",*(a++));
 }

int main(int argc, char **argv)
{
	In(a,size);
	sort_even_odd(size,a);
	prn(a,size);
	return 0;
}

