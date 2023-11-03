#include<stdio.h>
int main ()
{
	int a,n,i,z;
	printf("Enter the number");
	scanf("%d",&n);
	a=n%10;
	for(i=0;n!=0;i++)
	{
		z=n%10;
		n=n/10;
	}
	printf("%d",a+z);
	return 0;
}