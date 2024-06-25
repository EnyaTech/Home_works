#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
    scanf("%d", &a);
    if ((a > 0 && a < 3) || a == 12)
    {
        printf("winter");
    }
    else if (a >= 3 && a < 6)
    {
        printf("spring");
    }
    else if (a >= 6 && a < 9)
    {
        printf("summer");
    }
    else if (a >= 9 && a < 12)
    {
        printf("autumn");
    }
    else
    {
        printf("Error\n");
    }
	return 0;
}

