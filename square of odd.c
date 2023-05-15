#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{if(i%2==1)
	sum+=i*i;}
	printf("%d\n",sum);

	return 0;
	
}
