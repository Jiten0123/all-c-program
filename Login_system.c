#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int login();
	char username[20];
	char userdefault[]="jiten";
	int password=545673;
	int passdefault=0;
	int a,i,j,k;
int main()
{
		printf("\t\t-:WELCOME TO LOGIN SYSTEM:-\n\n");
		printf("ENTER YOUR USERNAME: ");
		scanf("%s",&username);
		printf("\nENTER YOUR 5 PIN PASSWORD: ");
	for(i=1;i<=5;i++)
	{	
		a=getch();
		printf("*",a);
		passdefault=passdefault*10+a;
	}
	getch();
		printf("\n\n");
	printf("LOADING");
	for(j=30;j<=30;j++)
	{
		for(k=1;k<=j;k++)
		{
			printf(".",k);
			Sleep(50);
		}
		printf("\n");
	}
	system("cls");
	login();
}
int login()
{
	if(strcmp(userdefault,username)==0 && password==passdefault)
	{
		printf("\n\n\t!!LOGIN SUCCESSFULL!!\n\n");
	}
	else if(password==passdefault && strcmp(userdefault,username)!=0)
	{
		printf("\n\n\n!!INVALID USERNAME!!\n\n");
	}
	else if(password!=passdefault && strcmp(userdefault,username)==0)
	{
		printf("\n\n\n!!INVALID PASSWORD!!\n\n");
	}
	else if(password!=passdefault && strcmp(userdefault,username)!=0)
	{
		printf("\n\n\t!!INVALID USERNAME AND PASSWORD!!\n\n");
	}
return 0;
}
