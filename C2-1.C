#include<stdio.h>
#include<conio.h>
/*
	Variables:
		- variables are container which stores value.
	syntax :
		DataType varName = value;

	DataType :
		- it indicates that how much memory is allocated to
		  variable.         			Format Specifiers
	Intiger     => 10, 5, 60, 45..   == int		=> %d, %i
	Float 	    => 3.14, 2.5, 4.8 	 == float     	=> %f
	Character   => A, V, a, b, c     == char        => %c

	Declaration
		int a;
	Assignment
		a = 10;
	Initialization
		int a = 10;

	Keywords :
		- int, float, char, const....
		- 32 keyword
			- datatype
			- statements
			- loop
*/
main()
{
	int a,b;
	int pi = 3.14;
	char c = 'C';
	a = 10;
	b = 5;
	clrscr();
	printf("a: %d\n",a);
	printf("b: %d\n",b);
	printf("Sum : %d\n\n",10 + 5);
	printf("PI = %d\n\n",pi);
	printf("Char : %c",c);
	getch();
}