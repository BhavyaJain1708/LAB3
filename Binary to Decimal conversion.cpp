#include<stdio.h>
#include<math.h>
int main ()
{
	int i,t,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=n;
	t=0;
	while(i>0)
	{
		t=t+(a[i-1])*(pow(2,n-i));
		i--;
	}
	printf("%d",t);
	return 0;
}
