#include<stdio.h>
int main()
{
	int i,k=0,j,a;
	printf("enter the number:");
	scanf("%d",&i);
	a=i;
	while(i>0)
	{
		j=i%10;
		k=k+j*j*j;
		i=i/10;
	}
	if(a==k)
	printf("ARMSTRONG NUMBER");
	else
	printf("NOT ARMSTRONG");
}
