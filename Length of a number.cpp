#include<stdio.h>
int main ()
{
	int n,i;
	printf("Enter the number");
	scanf("%d",&n);
	i=0;
	do
	{
		n/=10;
		i++;
	}
	while(n!=0);
	printf("The length of number is %d",i);
	return 0;
}