#include <stdio.h>
int main()
{
	int n,a=0,b=1,i,c;
	printf("enter a sreies");
	scanf("%d",&n);
for(i=1;i<=n;i++){
	printf("%d",a);
	c=a+b;
	b=a;
	a=c;
}
return 0;
}
