#include <stdio.h>
 int find_max_array(int size, int a[])
{
	int b= a[0];
	for(int i = 0; i<size; i++)
		if(a[i]>b)
			b=a[i];	
	return b;
}

int main(int argc, char **argv)
{
	int b;
	int a[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 591, 217, 859, 662, 493, 173, 174, 125, 591, 324};
	b=find_max_array(19,a);
	printf("%d",b);
	return 0;
}

