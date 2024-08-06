#include <stdio.h>
 int is_two_same(int size, int a[])
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j<size; j++)
		{
			if ((a[i] == a[j])&&(i!=j))
			{
				return 1;
			}
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	int a[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 30, 217, 859, 662, 493, 173, 174, 125, 591, 324};
	printf("%d",is_two_same(19,a));
	return 0;
}

