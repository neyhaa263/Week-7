#include<iostream>
using namespace std;
int main()
{
	
	int sub1,sub2,sub3;
	cout<<"Enter marks of sub1:";
	cin>>sub1;
	cout<<"Enter marks of sub2:";
	cin>>sub2;
	cout<<"Enter marks of sub3:";
	cin>>sub3;
	
	int total=sub1 + sub2 + sub3;
	float percentage = (total/3.0)*100;
	
	string grade;
	
	if(percentage >= 90) grade= "A";
	else if(percentage >= 80) grade ="B";
	else if(percentage >= 70)grade= "C";
	else if(percentage >= 60) grade= "D";
	else grade ="F";
	
	//if FAIL
	
	if (grade =="F")
	{
		cout<<"Total marks ="<<total <<endl;
		cout<<"Percentge ="<<percentage<<"%"<<endl;
		cout<<"Grade = f\n";
		cout<<"Failed";
		return 0;
	}
	cout<<"Total marks ="<<total <<endl;
    cout<<"Percentge ="<<percentage<<"%"<<endl;
    cout<<"Grade = "<<grade <<endl;
    
    //scholarship
    if(sub1>=90 && sub2>= 90&& sub3>= 90 && total >=270)
    {
    	cout<<"Eligible for Merit scholarship."<<endl;
	}
	else if(sub1 >= 80 && sub2 >= 80 && sub3 >= 80 && total >= 240)
	{
		cout<<"Eligible for Regular Scholarship."<<endl;
	}
	else
	{
		cout<<"Not Eligible for scholarship.";
	}
	return 0;
}
