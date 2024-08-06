#include <stdio.h>
enum {len=10};
int arr[len];

void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

void Res(int A[], int len, int *p_max, int *p_min)
{
	int f;
	*p_max = *p_min = A[0];
	if(arr[1]<arr[0])*p_min=arr[1];
	
	
	for(int i = 1; i<len; i++)
	{
		if (*p_max <arr[i])
		{
			*p_min=*p_max;
			*p_max = arr[i];
			f=i;
		}
		if (*p_min<arr[i] && arr[i] <= *p_max && f!=i)
		{
			*p_min=arr[i];
		}
	}
}

int main(int argc, char **argv)
{
	
	int max, min;
	max=min=0;
	In(arr,len);
	Res(arr,len,&max,&min);
	printf("%d", max+min);
	return 0;
}

