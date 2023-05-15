#include <stdio.h>
int main()
{
	int i,a,r,reverse=0;
	scanf("%d",&a);
	for(i=0;i=a;i++)
	{r=a%10;
	reverse=reverse*10+r;
	a=a/10;
	printf("%d",r);}
	return 0;
	
}
