#include<stdio.h>
int main()
{
	int a,c=0,d;
	printf("enter number:");
	scanf("%d",&d);
	for(a=1;a<d;a++)
	{
		if(d%a==0)
		{
			c=c+a;	
		}
	}
	if(d==c)
	{
		printf("perfect number");
	}
	else
	printf("not perfect");
}
