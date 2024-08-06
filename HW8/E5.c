#include <stdio.h>
enum {len=10};
int arr[len];

void In(int arr[], int len)
{
	for(int i = 0; i<len; i++)
		scanf("%d", &arr[i]);
}

int Res(int arr[], int len)
{
	int s = 0;
	for(int i = 0; i<len; i++)
	{
		if(arr[i]>0)
		s=s+arr[i];
	}
	return s;
}

int main(int argc, char **argv)
{
	
	
	In(arr,len);
	Res(arr,len);
	printf("%d",Res(arr,len));
	return 0;
}

