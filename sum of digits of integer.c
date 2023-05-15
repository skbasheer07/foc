#include<stdio.h>
int main()
{
	int n,r,i,sum=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;i=n;i++)
{
	r=n%10;
	n=n/10;
	sum+=r;}
	printf("%d\n",sum);
	return 0;
}
