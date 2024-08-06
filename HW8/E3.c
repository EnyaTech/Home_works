#include <stdio.h>

int arr[10];
void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

void Res(int A[], int SIZE, int *p_max, int *p_min, int *p_nmax, int *p_nmin)
{
	*p_max = *p_min = A[0];
    *p_nmax = *p_nmin = 1;
	
	for(int i = 1; i<10; i++)
	{
		if (*p_max <arr[i])
		{
			*p_max = arr[i];
			*p_nmax = (i+1);
		}
		if (*p_min>arr[i])
		{
			*p_min = arr[i];
			*p_nmin = (i+1);
		}
	}
}

int main(int argc, char **argv)
{
	
	int max, min,nmax,nmin;
	max=min=nmax=nmin=0;
	In(arr,10);
	Res(arr,5,&max,&min,&nmax,&nmin);
	printf("%d %d %d %d", nmax,max,nmin,min);
	return 0;
}

