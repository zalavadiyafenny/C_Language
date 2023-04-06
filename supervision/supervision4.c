#include<stdio.h>
main(){
	FILE *p,*p1;
	int b;
	printf("enter value of b :");
	scanf("%d",&b);
	
	p=fopen("demo.c","a");
	p1=fopen("demo2.xls","a");
	
	if(p==NULL && p1==NULL)
	{
		printf("you cannot open any file");
	}
	else
	{
		printf("you can open this file");
		fprintf(p,"the value of a :%d",b);
		fscanf(p,"the value of a :%d",&b);
		fprintf(p1,"the value of a :%d",b);
	}
}
