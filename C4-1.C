/*
	Operator :
		- operators are the symbol which helps to perform
		  arithmetic or logical operations between operands.
	Operand :
		- operands can be value or variable

	Types of operator :
		- unary 	single operand
		- binary        two operands
		- ternory       two or more operands

	Unary operator :
		- incriment  ++
			- pre incriment	: ++a / ++10 on the spot incriment
			- post incriment: a++ / 10++ next line incriment
		- decriment  --
			- pre decriment	: --a / --10
			- post decriment: a-- / 10--
	Binary operator :
		- arithmetic operators :
			+  	: addition
			-	: substraction
			* 	: multiplication
			/	: division
			%	: modulos
				    - it returns remainder after division
		- assignmnt operators	:  compound operators
			=	: equel to
			+=	: assigns result of addition
			-= 	: assigns result of substraction
			*= 	: assigns result of multiplication
			/=	: assigns result of division
			%=	: assigns result of modulos
		- conditional operators / relational operators :
			>	: greater than
			>=	: greater or equel to
			<	: less than
			<=	: less than equel to
			==	: is equel to
			!= 	: not equel to
		- logical operator	:
			&&	: logical and
			||	: logical or
			!	: logical not
	- Ternory operator :
		- ?:
			- (condition) ? True : False ;

	Operator precedence (priority)


	()	Brackets
	%	Operator modulos
	* /	LTR	Left to right
	+ -	LTR
	=

*/

main()
{
	int a = 15;
	int b = 4;
	float c;
	clrscr();

	c = (float)a / (float)b;

	printf("answer : %d\n",(a*a) + (2*a*b) + (b*b));

	getch();
}