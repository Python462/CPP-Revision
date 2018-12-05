#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool isloggedin()
{
	string username,password, un, pw;
	
	cout<<"Enter username:";  
	cin>>username;
	cout<<"Enter password";
	
	ifstream read("data\\"+username + ".txt");
	getline(read, un);
	getline(read, pw);
	
	if(un == username && password == pw);
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int choice;
	cout<<"\t\t1: Register\n\t\t2: Login\nYour choice:";
	cin>>choice;
	
	if(choice==1)
	{
	ofstream file;
	file.open("data\\"+username+".txt");
	file<<username<<endl<<password;
	file.close();
	main();
	}
	
	else if(choice==2)
	{
	bool status= isloggedin();
	if(!status)
	{
	cout<<" False Login!"<<endl;
	system("PAUSE");
	return 0;	
	}	
	else
	{
		cout<<" Successfully logged in!"<< endl;
		system("PAUSE");
		return 1;
	}
	}
}
