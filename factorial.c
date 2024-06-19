#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return(fact(n-1)*n);
}
void main()
{
	int num,f;
	clrscr();
	printf("Enter number:");
	scanf("%d",&num);
	f=factorial(num);
	printf("Fact = %d",f);
	getch();
}