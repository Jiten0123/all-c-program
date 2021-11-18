#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the first value: ");
	scanf("%d",&a);
	printf("enter the second value: ");
	scanf("%d",&b);
	printf("enter the third value: ");
	scanf("%d",&c);
	max=((a>b && a>c)?a:(b>a && b>c)?b:c);
	printf("largest value: %d",max);
}

