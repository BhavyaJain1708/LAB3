#include<stdio.h>
#include<math.h>
int main ()
{
	int i,n,t,k,s,N;
	printf("Enter the number");
	scanf("%d",&N);
	scanf("%d",&n);
	k=N;
	s=0;
	for(i=0;N!=0;i++)
	{
		t=N%10;
		N=N/10;
		s = s + t*(pow(10,n-i-1));
	}
	printf("%d\n",s);
	if(k==s)
	{
		printf("The given number is a Palindrome");
	}
	else
	{
		printf("The given number is not a Palindrome");
	}
	return 0;
}