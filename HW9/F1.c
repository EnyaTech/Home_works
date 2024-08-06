#include <stdio.h>
enum {size=20};
int a[size];

void In(int a[], int size)
{
	for(int i = 0; i<size; i++)
		scanf("%d", &a[i]);
}

 
void sort_array(int size, int a[])
{
	int b, sort = 0;
	for(int j = size-1; j>0; j--)
	{
		for(int i = size-1; i>0; i--)
		{
			if(a[i]<a[i-1])
			{
				b = a[i];
				a[i] = a[i-1];
				a[i-1] = b;
				sort++;
			}
		}
		if (sort == 0)
			return;
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
	sort_array(size,a);
	prn(a,size);
	return 0;
}

