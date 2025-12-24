#include<iostream>
using namespace std;
int main()
{
    string username,password,role;
	string correctusername="admin";
	string correctpassword="password123";
	cout<<"Enter username :";
	cin>>username;
	
	cout<<"Enter Password:";
	cin>>password;
	
	if(username == correctusername && password == correctpassword)
	{
		cout<<"Athentication Successful!"<<endl;
		cout<<"Enter your role(Admin/Guest/Other):";
		cin>>role;
		if(role=="Admin"||role=="admin")
		{
			cout<<"Full Access"<<endl;
		}
		else if (role == "Guest"||role=="guest")
        {
            cout << "Limited Access" << endl;
		}

		else
		{
			cout<<"No Access"<<endl;
		}
	}
	else
	{
		cout<<"Athentication Failed.Access Denied."<<endl;
	}
	return 0;
}
