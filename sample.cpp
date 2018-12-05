#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>    //exit
#include<unistd.h>     //sleep
#include<string.h>
using namespace std;
#include<windows.h>
////////////////
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

////////////

layout()
{
	int i;
	cout<<"\n\n\n";
	cout<<"    ___________________________________________________________________\n";
	for(i=0;i<3;i++)
	cout<<"   |                                                                   |\n";
	cout<<"   |            ~~~~~WELCOME TO VIKRANT PIZZA HUT~~~~~                |\n";
	for(i=0;i<3;i++)
	cout<<"   |                                                                   |\n";
	cout<<"   |___________________________________________________________________|\n";
	cout<<"\n";

	
	cout<<"    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	sleep(1);
}

/////////////////////////////////

welcome_page()
{
	    int n;
		cout<<"            ~~~~~~~~~~~~~~~~~Enter Your Choice~~~~~~~~~~~~~~~~~~\n\n";
		cout<<"                          ----------------------- \n";
		cout<<"                         |   1.Menu List         |\n";
		cout<<"                         |   2.Customer list     |\n";
		cout<<"                         |   3.Show Order        |\n";
		cout<<"                         |   4.Change Order      |\n";
		cout<<"                         |   5.Cancel Order      |\n";
		cout<<"                         |   6.Exit              |\n";
	    cout<<"                          ----------------------- \n\t\t";
		cin>>n;
		return (n);
}

//////////////////////////////////
class pizza
{
	long ph;
    char name[20],add[20],email[30];
    string piza,burger,beverg;
	int pizqnt=0,burgqnt=0,bevqnt=0;
	public:
 
	void create_contact()
	{
            cout<<"Phone: ";
            cin.ignore();
            cin>>ph;
            
            cout<<"Name: ";
            cin.ignore();
            cin>>name;
            
			cout<<"Address: ";
            cin.ignore();
            cin>>add;
 
            cout<<"Email address: ";
            cin.ignore();
            cin>>email;
 
            cout<<"\n";
	}
	
	void show_cust_list()
	{
		cout<<endl<<"Phone #: "<<ph;
		cout<<endl<<"Name: "<<name;
		cout<<endl<<"Address: "<<add;
		cout<<endl<<"Email Address : "<<email;
	}
	
	long getPhone()
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
	int opt,n=0;
	void menu()
	{
		int choice;
	cout<<"\t\tMenu Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t\t1: Pizza\n";
	cout<<"\t\t2: Burger\n";
	cout<<"\t\t3: Beverages\n";
	cout<<"\t\t4: Exit\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
	{
	cout<<"\t|\tPizza Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t1: Margherita\n";
	cout<<"\t|\t2: Peepy Paneer\n";
	cout<<"\t|\t3: Farm house\n";
	cout<<"\t|\t4: Deluxe Veggie\n";
	cout<<"\t|\t5: Not Intrested\n";
	cin>>opt;
	   switch(opt)
	   {
	 	case 1:
	 		piza="Margherita";
	 		break;
	 	case 2:
	 		piza="Peepy Paneer";
	 		break;
		case 3:
	 		piza="Farm house";
	 		break;
		case 4:
	 		piza="Deluxe Veggie";
	 		break;	 	 	
	 	case 5:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the Pizza quantity";
	 		cin>>n;
	 		pizqnt=n;
	}
	break;
	
	case 2:
	{
			int opt;
	cout<<"\t|\tBurger Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t1: Taco Burger\n";
	cout<<"\t|\t2: Canyon Creek Burger\n";
	cout<<"\t|\t3: Cheese Burger\n";
	cout<<"\t|\t4: Turkey Burger\n";
	cout<<"\t|\t5: Mushroom Stuffed \n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>opt;
	   
	   switch(opt)
	   {
	 	case 1:
	 		burger="Taco Burger";
	 		break;
	 	case 2:
	 		burger="Canyon Creek";
	 		break;
		case 3:
	 		burger="Cheese Burger";
	 		break;
		case 4:
	 		burger="Turkey Burger";
	 		break;	
		case 5:
	 		burger="Mushroom stuffed";
	 		break;	  	 	
	 	case 6:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the burger quantity";
	 		cin>>n;
	 		burgqnt=n;                      
	}
	break;
	
    case 3:
	{
		
			int opt;
	cout<<"\t|\tBeverages Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t1: Apple Cider\n";
	cout<<"\t|\t2: Hot chocolate\n";
	cout<<"\t|\t3: Coffee\n";
	cout<<"\t|\t4: Milk Shake\n";
	cout<<"\t|\t5: Coca Cola\n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>opt;
	
	   switch(opt)
	   {
	 	case 1:
	 		beverg="Apple Cider";
	 		break;
	 	case 2:
	 		beverg="Hot Chocolate";
	 		break;
		case 3:
	 		beverg="Coffee";
	 		break;
		case 4:
	 		beverg="Milk Shake";
	 		break;	
		case 5:
	 		beverg="Coca Cola";
	 		break;			   	 	
	 	case 6:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the beverg quantity";
	 		cin>>n;
	 		bevqnt=n;       
	}
	break;
	
	default:
		cout<<"Enter Valid Option";
		menu();
		break;
}
}
};  
 
fstream fp;
pizza piz;
 
void save_contact()
{
	fp.open("contactBook.dat",ios::out|ios::app);
	piz.create_contact();
	fp.write((char*)&piz,sizeof(piz));
	fp.close();
	cout<<endl<<endl<<"Contact Has Been Sucessfully Created...";
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
 
 
void show_order(int num)
{
	bool found;
	int ch;
 
		 found=false;
	fp.open("contactBook.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(piz.getPhone()==num)
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
	int num;
	bool found=false;
	system("cls");
	cout<<"..::Edit contact\n===============================\n\n\t..::Enter the number of contact to edit:";
    cin>>num;
	
	fp.open("contactBook.dat",ios::in|ios::out);
	while(fp.read((char*)&piz,sizeof(piz)) && found==false)
	{
		if(piz.getPhone()==num)
		{
			piz.show_cust_list();
            cout<<"\nPlease Enter The New Details of Contact: "<<endl;
			piz.create_contact();
			int pos=-1*sizeof(piz);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&piz,sizeof(piz));
			cout<<endl<<endl<<"\t Contact Successfully Updated...";
			found=true;
		}
	}
	fp.close();
	if(found==false)
		cout<<endl<<endl<<"Contact Not Found...";
 
 
}
 
 
void cancel_order()
{
	int num;
	system("cls");
	cout<<endl<<endl<<"Please Enter The contact #: ";
	cin>>num;
	fp.open("contactBook.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(piz.getPhone()!=num)
		{
			fp2.write((char*)&piz,sizeof(piz));
		}
	}
	fp2.close();
	fp.close();
	remove("contactBook.dat");
	rename("Temp.dat","contactBook.dat");
	cout<<endl<<endl<<"\tContact Deleted...";
}
//////////////////////////////////
int main()
{
	int num;
	int k;
	layout();
	tx:
	k=welcome_page();
	switch(k)
	{
		case 1:
			piz.menu();
		    goto tx;
		case 2:
			system("cls");
			customer_list();
		    goto tx;
		case 3:
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
	return 0;
}
