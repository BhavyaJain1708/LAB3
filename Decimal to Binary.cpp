#include<stdio.h>
#include<math.h>
int main ()
{
	int i,j,N,t;
	printf("Enter the number");
	scanf("%d",&N);
	t=0;
	for(i=0;N!=0;i++)
	{
		j=N%2;
		N=N/2;
		
		t=t+ j*(pow(10,i));
	}
	printf("%d",t);
	return 0;
}