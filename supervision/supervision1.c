#include<stdio.h>
main(){
	FILE *p;
	int a;
	printf("enter value of a:");
	scanf("%d",&a);
	
	p=fopen("demo.c","w");
	
	if(p==NULL)
	{
		printf("you cannot open any file");
	}
	else
	{
		printf("you can open this file");
		fprintf(p,"the value of a :%d",a);
	}
}
