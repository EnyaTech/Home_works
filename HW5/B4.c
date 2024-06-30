#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,c,i;
	scanf ("%d", &a);
	c=a;
	for(i=1;i<=3;i++)
	{
	c=c/10;
	if(c == 0 && i<3) 
	break;
    }
     (c==0 && i>3 )? printf("YES"): printf("NO");
    
	return 0;
}
