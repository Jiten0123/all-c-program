#include<stdio.h>
int main()
{
	char i[20];int j,k;
	printf("enter your name:");
	scanf("%s",&i);
	printf("\nhow much time you want to print your name:");
	scanf("%d",&j);
	for(k=1;k<=j;k++)
	{
		printf("%s\n",i);
	}
}
