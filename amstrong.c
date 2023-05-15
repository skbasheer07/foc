#include<stdio.h>
int main()
{
	int n,temp=0,sum=0,r;
	printf("enter three digit number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("the given number is an amstrong number");
	}
	else
	{
		printf("the givewn number is not an amstrong number");
	}
	return 0;
}
