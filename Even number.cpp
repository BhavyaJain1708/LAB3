#include<stdio.h>
int main ()
{
	int n,i;
	printf("N is\n");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d",i);
		printf("\n");
	}
	return 0;
}