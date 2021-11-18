#include <stdio.h>
int main()
{
	char a;
	printf("enter a alphabet:");
	scanf("%c",&a);
	if(a>='a' && a<='z')
	{
		printf("%c is lowercase alphabet",a);
	}
	else if(a>='A' && a<='Z')
	{
		printf("%c IS UPEPERCASE ALPHABET",a);
	}
	else
	{
		printf("your input is not an alphabet");
	}
}
