#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,var1=0,var2=1,next=0;
	clrscr();
	printf("Enter a positive number:");
	scanf("%d",&n);
	nexterm = var1+var2;
	while(next<=n)
	{
		var1=var2;
		var2=next;
		next=var1+var2;
	}
	printf("The fibonacci series is: %d",next);
	getch();
}