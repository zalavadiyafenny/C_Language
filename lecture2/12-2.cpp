#include<iostream>
using namespace std;
class emp{
	char color[10],model[20],company_name[20];
	int id,r_year,i;
	
	public :
	     void input(){
	     	for(i=1;i<=5;i++){
	     		cout<<"enter the color of emp:";
	     		cin>>color;
	     		cout<<"enter the model of emp:";
	     		cin>>model;
	     		cout<<"enter the company_name of emp:";
	     		cin>>company_name;
	     		cout<<"enter the id of emp:";
	     		cin>>id;
	     		cout<<"enter the r_year of emp:";
	     		cin>>r_year;
	     		
			 }
		}
	     	void output(){
	     		for(i=1;i<=5;i++){
	     		cout<<"\n";	
	     		cout<<" the color of emp:"<<color<<"\n";
	     		cout<<"the model of emp:"<<model<<"\n";
	     		
	     		cout<<"the company_name of emp:"<<company_name<<"\n";
	     		
	     		cout<<"the id of emp:"<<id<<"\n";
	     		
	     		cout<<" the r_year of emp:"<<r_year<<"\n";
	    
	     		
			 }
			 }
	     
		 
};


main()
{
	emp e;
	e.input();
	e.input();
}
