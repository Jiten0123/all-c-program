#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
	int i;
	for(i=700;i<10000;i+=300)
	{
		Beep(i,1000);
	}
	
	getch();
	return 0;
}
