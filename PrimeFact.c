#include<stdio.h>
#include<conio.h>
int fact(int num);
void main()
	{
	int num,ans;
	clrscr();
	printf("\nEnter A Number:");
	scanf("%d",&num);
	fact(num);


	getch();
	}
int fact(int n)
	{
	static int i=2;
	if(i<=n)
	{
	if(n%i==0)
		{
		printf("\n%d",i);
		n=n/i;
		fact(n);
		}
	else
		{
		i++;
		fact(n);
		}
	 }
       return 0;
	 }
