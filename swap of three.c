#include <stdio.h>
int main()
{
	int a=2,b=3,c=4,temp;
	printf("a=%d,b=%d,c=%d",a,b,c);
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
