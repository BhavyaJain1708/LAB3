#include<stdio.h>
int main()
{
	int sum,n,i;
	printf("N is");
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n;i++)
	{
	sum=sum+i;
	}
	printf("%d",sum);
    return 0;
	}