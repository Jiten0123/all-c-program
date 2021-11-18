#include<stdio.h>
int main()
{
	int n,rev=0,i,j;
	printf("enter the number:");
	scanf("%d",&n);
	j=n;
	while(n>0)
	{
		i=n%10;
		rev=10*rev+i;
		n=n/10;
	
	}
	if(j==rev)
	{
		printf("\nPALINDROME");
	}
	else
	{
		printf("\nNOT PALINDROME");
	}
}
