#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
			if(j>i)
			printf(" ");
			else
			printf("* ");
			printf("\n");
	}
		for(i=2;i<=5;i++)
	{
	for(j=1;j<=5;j++)
			if(j<i)
			printf(" ");
			else
			printf("* ");
			printf("\n");
	}
				
}
