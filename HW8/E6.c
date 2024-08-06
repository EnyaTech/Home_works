#include <stdio.h>
enum {len=12};
int arr[len];

void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

float Res(int arr[], int len)
{
	int s = 0;
	for(int i = 0; i<len; i++)
	{
		s=s+arr[i];
	}
	return (float)s/len;
}

int main(int argc, char **argv)
{
	
	
	In(arr,len);
	Res(arr,len);
	printf("%.2f",Res(arr,len));
	return 0;
}

