#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:");
	scanf("%i",&a);
	if(a%5==0 && a%11==0)
	{
		printf("%i is divisable by 5 and 11",a);
	}
	else if(a%5==0)
	{
		printf("%i is divisable by 5",a);
	}
	else if(a%11==0)
	{
		printf("%i is divisable by 11",a);
	}
	else if(a%5!=0 && a%11!=0)
	{
		printf("%i is not divisable by 5 and 11",a);
	}
}
