#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define P printf
/*
	Static / Dynamic

	scanf("format_Specifiers",address_of_variable);	Scan formatted

	address of operator	=> &
		- &varName
*/

main()
{
	int a,b,c;
	clrscr();
	//WAP to swap two variables
	printf("Enter a & b: ");
	scanf("%d%d",&a,&b);

	c = a;
	a = b; // 20
	b = c; // 20

	printf("a: %d\n",a);
	printf("b: %d\n",b);

	getch();
}