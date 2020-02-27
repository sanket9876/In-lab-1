#include<stdio.h>
#include<conio.h>
main()
{
int n;
printf("enter a no.");
scanf("%d",&n);
if(n%2==0)
{
	printf("\n it is a even no.");
}
else if(n%2==1)
{printf("\n it is not a even no.");}
else
{
	printf("improper no.");
}
getch();
}

