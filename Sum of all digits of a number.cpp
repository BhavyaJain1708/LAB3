#include<stdio.h>
int main()
{
	int n,k,t;
	printf("Enter the number");
	scanf("%d",&n);
	k=n;
	t=0;
	int z;
	do
	{
		z=k%10;
		k=k/10;
		t=t+z;
	}
	while(k!=0);
	printf("%d",t);
	return 0;
}
