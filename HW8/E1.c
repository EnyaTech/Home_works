#include <stdio.h>

void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

float Sr(int arr[], int len)
{
	int sum = 0;
	float s;
	for(int i = 0; i<len; i++)
		sum+=arr[i];
	return s=(float)sum/len;
}

int main(int argc, char **argv)
{
	int arr[5];
	In(arr,5);
	printf("%.3f",Sr(arr, 5));
	return 0;
}

