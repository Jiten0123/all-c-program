#include<stdio.h>
int main()
{
	int ch,i=2,c,a=0,b=1;
	printf("enter the number:");
	scanf("%d",&ch);
	if(ch==1)
	printf("%d",a);
	else
	{
		printf("%d\n%d\n",a,b);
		while(i++<ch)
		{
			c=a+b;
			printf("%d\n",c);
			a=b;
			b=c;
		}
	}	
}
