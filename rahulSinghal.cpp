#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <windows.h>

using namespace std;
//////////////
void gotoxy(long x, long y) 
      {
           COORD pos = {x, y};
           SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      }

homepage()
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED );
	int i;
	cout<<"\n\n\n";
	cout<<"\t    ****************************************************************************************\n";
	cout<<"\t   |\t\t                    LOVELY PROFESSIONAL UNIVERSITY                          |\n";
	cout<<"\t   |\t\t           Department Of Computer Science And Engineering                   |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	cout<<"\t   |\t\t                       A MINI PROJECT ON                                    |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	cout<<"\t   |\t\t                       Cyber Cafe System                                    |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	cout<<"\t   |\t\t        BY:                                         GUIDE:                  |\n";
	cout<<"\t   |\t\t     -------------                                -----------               |\n";
	cout<<"\t   |\t\t   RAHUL SINGHAL                             Mrs. SHUKSHAM GUPTA            |\n";
	cout<<"\t   |\t\t   Reg No.-> 11709459                                                       |\n";
	cout<<"\t   |\t\t   Roll NO.->02                                                             |\n";
    cout<<"\t    ****************************************************************************************\n\n";
	
	//for(int i=17;i<97;i++)
	
	for(int i=0;i<13;i++)
	{
		gotoxy(11,i+3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i );
		cout<<"||";
		gotoxy(100,i+3);
		cout<<"||";
	}
	int k;
	for(int i=0;i<92;i++)
	{
		if(i>9)
		k=i%10;
		else
        k=i;
		gotoxy(10+i,3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k);
		cout<<"*";
		gotoxy(10+i,16);
		cout<<"*";
	
	}
	
	getch();
    cout<<"\n\n";
	cout<<"          ====================================================================\n";
	for(i=0;i<3;i++)
	cout<<"          |                                                                   |\n";
	cout<<"          |            ~~~~~WELCOME TO Rahul Cafe Centre~~~~~                 |\n";
	for(i=0;i<3;i++)
	cout<<"          |                                                                   |\n";
	cout<<"          |===================================================================|\n";
	cout<<"\n";

	getch();
	cout<<"         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	sleep(1);
	
}
///////////////
welcome_page()
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
	    int n;
		cout<<" \n          ~~~~~~~~~~~~~~~~~Enter Your Choice~~~~~~~~~~~~~~~~~~\n\n";
		cout<<"                          ----------------------- \n";
		cout<<"                         |   1.Add    Record     |\n";
		cout<<"                         |   2.Show   Record     |\n";
		cout<<"                         |   3.Search Record     |\n";
		cout<<"                         |   4.Update Record     |\n";
		cout<<"                         |   5.Delete Record     |\n";
		cout<<"                         |   6.Exit              |\n";
	    cout<<"                          ----------------------- \n\t\t";
		cin>>n;
		return (n);
}

//////////////
class file
{
	char ph[20];
    char name[20],add[20],email[30],age[5];
    //int qnt=0;
//	float bill=0;
	public:
 
	void create_contact()
	{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1 );
            cout<<"Phone_No ";
            cin.ignore();
            gets(ph);
            
            cout<<"Name: ";
            gets(name);
            
            cout<<"Age: ";
            gets(age);
            
			cout<<"Address: ";
            gets(add);
			    
            cout<<"Email address: ";
            gets(email);                                                         
            cout<<"\n";
	}
	
	void show_cust_list()
	{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6 );
		cout<<endl<<"\t|\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<endl<<"\t|\tPhone_no #: "<<ph;
		cout<<endl<<"\t|\tName: "<<name;
		cout<<endl<<"\t|\tAge: "<<age;
		cout<<endl<<"\t|\tAddress: "<<add;
		cout<<endl<<"\t|\tEmail Address : "<<email;
		//cout<<endl<<"\t|\t"<<itm<<" :"<<itm_typ;
		//cout<<endl<<"\t|\t"<<"Total bill =$"<<bill<<" x "<<qnt<<" = $"<<bill*qnt;	
		cout<<endl<<"\t|\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
	
	char* getPhone()
	{
		return ph;
	}
	
	char* getName()
	{
		return name;
	}
	
	char* getAddress()
	{
		return add;
	}
	
	char* getEmail()
	{
		return email;
	}
};  
 
fstream fp;
file piz;
 
void save_contact()
{
	fp.open("contactBook.dat",ios::out|ios::app);
	piz.create_contact();
	fp.write((char*)&piz,sizeof(piz));
	fp.close();
	cout<<endl<<endl<<"Order Has Been Sucessfully Placed...";
	getchar();
}
 
void customer_list()
{
	system("cls");
	 cout<<"\n\t\t================================\n\t\t\tLIST OF Customer\n\t\t================================\n";
	fp.open("contactBook.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		piz.show_cust_list();
		cout<<endl<<"=================================================\n"<<endl;
	}
	fp.close();
}
 

void show_order(char* num)
{
	bool found;
	int ch;
	
		 found=false;
	fp.open("contactBook.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(strcmp(piz.getPhone(),num)==0)
		{
			system("cls");
			piz.show_cust_list();
			found=true;
		}
	}
	
	fp.close();
	if(found == false){
	cout<<"\n\nNo record found...";}   
	getchar();
}
 
 
void change_order()
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5 );
	char num[20];
	bool found=false;
	system("cls");
	cout<<"..::Edit contact\n===============================\n\n\t..::Enter the Phone number of customer to edit:";
    cin>>num;
	
	fp.open("contactBook.dat",ios::in|ios::out);
	while(fp.read((char*)&piz,sizeof(piz)) && found==false)
	{
		if(strcmp(piz.getPhone(),num)==0)
		{
			piz.show_cust_list();
            cout<<"\nPlease Enter The New Details of Order: "<<endl;
			piz.create_contact();
			int pos=-1*sizeof(piz);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&piz,sizeof(piz));
			cout<<endl<<endl<<"\t Order Successfully Updated...";
			found=true;
		}
	}
	fp.close();
	if(found==false)
		cout<<endl<<endl<<"Contact Not Found...";
 
 
}
 
 
void cancel_order()
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7 );
	char num[20];
	system("cls");
	cout<<endl<<endl<<"Please Enter The Phone no #: ";
	cin>>num;
	fp.open("contactBook.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(strcmp(piz.getPhone(),num)!=0)
		{
			fp2.write((char*)&piz,sizeof(piz));
		}
	}
	fp2.close();
	fp.close();
	remove("contactBook.dat");
	rename("Temp.dat","contactBook.dat");
	cout<<endl<<endl<<"\Order Deleted...";
}

//////////////
void login()
{
	tx:
		int password;
			password = 1234;
			int pass;
			cout<<"Enter Password :";
			cin>>pass;
			if(pass == password)
				cout<<"\n\t\t\tSuccessful LogIn";
			else
				goto tx;
}	
int call()
{
	int opt;
	cout<<"\n\t\t\t1.\tMaster Entry"<<endl;
		cout<<"\t\t\t2.\tCafe Management"<<endl;
		cout<<"\t\t\t3.\tExit";
		cin>>opt;
		if(opt==3)
		exit (0);
		return opt;
}
/////////////////
int main()
{
//	system("color 234");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
		homepage();
	char num[20];
	int k;
	if(call()==1)
	{
	login();
	tx:
	k=welcome_page();
	switch(k)
	{
		case 1:
			save_contact();
		    goto tx;
		case 2:
			system("cls");
			customer_list();
		    goto tx;
		case 3:
			cout<<"Enter the Phone no. of the customer to see Order\n";
			cin>>num;
			show_order(num);
			goto tx;
		case 4:
		    change_order();
		    goto tx;
		case 5:
		    cancel_order();
		    goto tx;
		    
		case 6:
		    exit (0);	
		default:
			printf("                               Enter Valid Option\n");
		    goto tx;	     	
	}
}
	return 0;
}
