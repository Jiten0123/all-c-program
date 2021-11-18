#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i;
	for(i=1;i<=100;i++)
	{
		float a,i,j,k,l,m,n,p;
		system("cls");
		printf("enter the operator \naddition = 1\nsubstraction = 2\nmultiplication = 3\ndivision = 4\n");
		scanf("%f",&a);
		printf("enter first value:");
		scanf("%f",&i);
		printf("enter the second value:");
		scanf("%f",&j);
		k=i+j;
		l=i-j;
		m=i*j;
		n=i/j;
		((a==1)?printf("sum of %g and %g : %.2f\n",i,j,k):(a==2)
		?printf("substract of %g and %g : %.2f\n",i,j,l):(a==3)?printf("multiply of %g and %g : %.2f\n",i,j,m):
		(a==4)?printf("divide of %g and %g : %.2f\n",i,j,n):printf("\n!!ENTER OPERATOR VALUE CORRECTLY!!\n"));
		printf("\nif you want to stop press 1 otherwise press 0 to continue: ");
		scanf("%f",&p);
		if(p==1)
		{
			break;
		}
	}
	
}
