#include <stdio.h>

void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

int min(int arr[], int len)
{
	for(int i = len-1; i>0; i--)
		if (arr[i]<arr[i-1])
		{
			int m;
			m = arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=m;
		}
	return arr[0];
}

int main(int argc, char **argv)
{
	int arr[5];
	In(arr,5);
	printf("%d", min(arr,5));
	return 0;
}

