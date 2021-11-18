#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b=0;
	printf("Enter number : ");
	for(int i=1;i<=5;i++)
	{
		a=getch();
		printf("*",a);
	}
	getch();
}
