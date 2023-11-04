#include<stdio.h>
int main ()
{
	int i,t,n,y,j;
	printf("Enter the value of n");
	scanf("%d",&n);
	t=0;
	y=1;
	for(i=0;i<n-1;i++)
	{
		j=t;
		t=y;
		y=j;
		t=t+y;
	}
	printf("%d",t);
	return 0;
}