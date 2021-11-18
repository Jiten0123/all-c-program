#include<stdio.h>
int main()
{
	int i,j,k,l;
	k=0;
	printf("enter the count of number:");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==2)
		printf("%d\t",i);
		k=0;
	}
}
