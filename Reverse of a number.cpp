#include<stdio.h>
int main ()
{
	int i,n;
	printf("Enter the number to be reversed");
	scanf("%d",&n);
	do
	{
		i=n%10;
		n=n/10;
		printf("%d",i);
	}
	while(n!=0);
	return 0;
}