#include<iostream>
using namespace std;
class emp{
	char name[20],role[20],city[20],company_name[20];
	int id,age,salary,experience,i;
	
	public :
	     void input(){
	     	for(i=1;i<=5;i++){
	     		cout<<"enter the name of emp:";
	     		cin>>name;
	     		cout<<"enter the role of emp:";
	     		cin>>role;
	     		cout<<"enter the city of emp:";
	     		cin>>city;
	     		cout<<"enter the company_name of emp:";
	     		cin>>company_name;
	     		cout<<"enter the id of emp:";
	     		cin>>id;
	     		cout<<"enter the age of emp:";
	     		cin>>age;
	     		cout<<"enter the salary of emp:";
	     		cin>>salary;
	     		cout<<"enter the experience of emp:";
	     		cin>>experience;
			 }
		}
	     	void output(){
	     		for(i=1;i<=5;i++){
	     		cout<<"\n";	
	     		cout<<" the name of emp:"<<name<<"\n";
	     		cout<<"the role of emp:"<<role<<"\n";
	     		
	     		cout<<" the city of emp:"<<city<<"\n";
	     		
	     		cout<<"the company_name of emp:"<<company_name<<"\n";
	     		
	     		cout<<"the id of emp:"<<id<<"\n";
	     		
	     		cout<<" the age of emp:"<<age<<"\n";
	     		
	     		cout<<" the salary of emp:"<<salary<<"\n";
	     		
	     		cout<<"the experience of emp:"<<experience<<"\n";
	     		
			 }
			 }
	     
		 
};


main()
{
	emp e;
	e.input();
	e.input();
}
