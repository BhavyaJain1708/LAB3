#include<stdio.h>
int main()
{
	int i,j,n,k,t;
	//i is the length of the number
	printf("Enter the number");
	scanf("%d",&n);
	k=n;
	i=0;
	do
	{
		n=n/10;
		i++;
	}
	while(n!=0);
	int a[i];
	for(j=0;j<i;j++)
	{
		a[j]=k%10;
		k=k/10;
	}
	for(j=0;j<i;j++)
	{
	t=t+a[j];	
	}
	printf("%d",t);
	return 0;
}