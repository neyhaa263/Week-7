#include<iostream>
using namespace std;
int main()
{
int age;
double income;
cout<<"Enter your age :" ;
cin>>age;

cout<<"enter your income : $" ;
cin>>income;

if(age>=18)
{
	if(income>=30000)
	{
		cout<<"Congratulations you are eligible for a loan.";
	}
	else 
	{
	cout<<"You meet the age requirement but not eligible for a loan because your income is below $30,000.";
	}
}
else
{
	cout<<"You are not eligible for a loan because you are under 18 years of age."<<endl;
}
return 0;
}
