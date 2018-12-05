#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>    //exit
#include<unistd.h>     //sleep
#include<string.h>
using namespace std;

homepage()
{
	system("color 04");
	int i;
	cout<<"\n\n\n";
	cout<<"    *********************************************************************************\n";
	cout<<"   |\t\t                    LOVELY PROFESSIONAL UNIVERSITY                   |\n";
	cout<<"   |\t\t           Department Of Computer Science And Engineering            |\n";
	cout<<"   |\t\t                                                                     |\n";
	cout<<"   |\t\t                       A MINI PROJECT ON                             |\n";
	cout<<"   |\t\t                                                                     |\n";
	cout<<"   |\t\t                           PIZZA HUT                                 |\n";
	cout<<"   |\t\t                                                                     |\n";
	cout<<"   |\t\t        BY:                                         GUIDE:           |\n";
	cout<<"   |\t\t     -------------                                -----------        |\n";
	cout<<"   |\t\t   VIKRANT CHAUDHARY                         Mr. PRAVEEN SEHGAL Sir  |\n";
	cout<<"   |\t\t   Reg No.-> 11703065                                                |\n";
	cout<<"   |\t\t   Roll NO.->52                                                      |\n";
	cout<<"    *********************************************************************************\n\n";
	getch();
	//textcolor(34);
	cout<<"           ====================================================================\n";
	for(i=0;i<3;i++)
	cout<<"          |                                                                   |\n";
	cout<<"          |            ~~~~~WELCOME TO TOMATO PIZZA HUT~~~~~                  |\n";
	for(i=0;i<3;i++)
	cout<<"          |                                                                   |\n";
	cout<<"          |===================================================================|\n";
	cout<<"\n";

	getch();
	cout<<"         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	sleep(1);
}

/////////////////////////////////

main_page()
{
	    int n;
		cout<<" \n          ~~~~~~~~~~~~~~~~~Enter Your Choice~~~~~~~~~~~~~~~~~~\n\n";
		cout<<"                          ----------------------- \n";
		cout<<"                         |   1.advisory List         |\n";
		cout<<"                         |   2.Customer list     |\n";
		cout<<"                         |   3.Show advisory       |\n";
		cout<<"                         |   4.Change advisory      |\n";
		cout<<"                         |   5.Cancel advisory      |\n";
		cout<<"                         |   6.Exit              |\n";
	    cout<<"                          ----------------------- \n\t\t";
		cin>>n;
		return (n);
}

///////////////////////////////////////
char men[20],women[20],kids[20];
//////////////////////////////////////
class pizza
{
	long order_no;
    char name[20],add[20],email[30],itm[20],itm_typ[20];
    int qnt=0;
	float bill=0;
	public:
 
	void cust_info()
	{
            cout<<"OrderNo: ";
            cin.ignore();
            cin>>order_no;
            
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
		cout<<endl<<"\t|\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<endl<<"\t|\tOrderNo #: "<<order_no;                    
		cout<<endl<<"\t|\tName: "<<name;
		cout<<endl<<"\t|\tAddress: "<<add;
		cout<<endl<<"\t|\tEmail Address : "<<email;
		cout<<endl<<"\t|\t"<<itm<<" :"<<itm_typ;
		cout<<endl<<"\t|\t"<<"Total bill =$"<<bill<<" x "<<qnt<<" = $"<<bill*qnt;	
		cout<<endl<<"\t|\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
	
	long get_order_no()
	{
		return order_no;
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
	cout<<"\t|\t Pizza_list\t\t\tPrice_cost\n";
	cout<<"\t|\t1: Margherita\t\t\t$1.2\n";
	cout<<"\t|\t2: Peepy Paneer\t\t\t$1.5\n";
	cout<<"\t|\t3: Farm house\t\t\t$2\n";
	cout<<"\t|\t4: Deluxe Veggie\t\t$2.5\n";
	cout<<"\t|\t5: Not Intrested\n";
	cin>>opt;
	   switch(opt)
	   {
	 	case 1:
	 		strcpy(piza,"Margherita");
	 		bill=1.2;
	 		break;
	 	case 2:
	 		strcpy(piza,"Peepy Paneer");
	 		bill=1.5;
	 		break;
		case 3:
	 		strcpy(piza,"Farm house");
	 		bill=1.5;
	 		break;
		case 4:
	 		strcpy(piza,"Deluxe Veggie");
	 		bill=2;
	 		break;	 	 	
	 	case 5:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	        cout<<"Enter the Pizza quantity";
	 		cin>>qnt;
	 		strcpy(itm,"PIZZA ->");
	 		strcpy(itm_typ,piza);
	 		 	
	}
	break;
	
	case 2:
	{
			int opt;
	cout<<"\t|\tBurger Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t Burger_list \t\t\tPrice_cost\n";
	cout<<"\t|\t1: Taco Burger\t\t\t$1\n";
	cout<<"\t|\t2: Canyon Creek Burger\t\t$1.5\n";
	cout<<"\t|\t3: Cheese Burger\t\t$2\n";
	cout<<"\t|\t4: Turkey Burger\t\t$1.8\n";
	cout<<"\t|\t5: Mushroom Stuffed \t\t$2\n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>opt;
	   
	   switch(opt)
	   {
	 	case 1:
	 		strcpy(burger,"Taco Burger");
	 		bill=1;
	 		break;
	 	case 2:
	 		strcpy(burger,"Canyon Creek");
	 		bill=1.5;
			break;
		case 3:
	 		strcpy(burger,"Cheese Burger");
	 		bill=2;
			break;
		case 4:
	 		strcpy(burger,"Turkey Burger");
	 		bill=1.8;
	 		break;	
		case 5:
	 		strcpy(burger,"Mushroom stuffed");
	 		bill=2;
	 		break;	  	 	
	 	case 6:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the burger quantity";
	 		cin>>qnt;
	 		strcpy(itm,"Burger ->");
	 		strcpy(itm_typ,burger);                      
	}
	break;
	
    case 3:
	{
		
			int opt;
	cout<<"\t|\tBeverages Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t Beverages_list\t\t\tPrice_cost\n";
	cout<<"\t|\t1: Apple Cider\t\t\t$1\n";
	cout<<"\t|\t2: Hot chocolate\t\t$1.2\n";
	cout<<"\t|\t3: Coffee\t\t\t$1.3\n";
	cout<<"\t|\t4: Milk Shake\t\t\t$1.5\n";
	cout<<"\t|\t5: Coca Cola\t\t\t$2\n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>opt;
	
	   switch(opt)
	   {
	 	case 1:
	 		strcpy(beverg,"Apple Cider");
	 		bill=1;
	 		break;
	 	case 2:
	 		strcpy(beverg,"Hot Chocolate");
	 		bill=1.2;
	 		break;
		case 3:
	 		strcpy(beverg,"Coffee");
	 		bill=1.3;
	 		break;
		case 4:
	 		strcpy(beverg,"Milk Shake");
	 		bill=1.5;
	 		break;	
		case 5:
	 		strcpy(beverg,"Coca Cola");
	 		bill=2;
	 		break;			   	 	
	 	case 6:
	 		cout<<"Have look on another items";
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the beverg quantity";
	 		cin>>qnt;
	 		strcpy(itm,"BEVERAGES ->");
	 		strcpy(itm_typ,beverg);      
	}
	break;
	
	case 4:
		exit (0);
	default:
		cout<<"Enter Valid Option";
		menu();
		break;
}
}
};  
 
fstream fp;
pizza piz;
 
void save_cust_info()
{
	fp.open("contactBook.dat",ios::out|ios::app);
	piz.cust_info();
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
 

void show_order(int num)
{
	bool found;
	int ch;
 
		 found=false;
	fp.open("contactBook.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(piz.get_order_no()==num)
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
	cout<<"..::Edit contact\n===============================\n\n\t..::Enter the Order number of customer to edit:";
    cin>>num;
	
	fp.open("contactBook.dat",ios::in|ios::out);
	while(fp.read((char*)&piz,sizeof(piz)) && found==false)
	{
		if(piz.get_order_no()==num)
		{
			piz.show_cust_list();
            cout<<"\nPlease Enter The New Details of Order: "<<endl;
			piz.cust_info();
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
	int num;
	system("cls");
	cout<<endl<<endl<<"Please Enter The Order No. #: ";
	cin>>num;
	fp.open("contactBook.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(piz.get_order_no()!=num)
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

//////////////////////////////////
int main()
{
	int num;
	int k;
	homepage();
	tx:
	k=main_page();
	switch(k)
	{
		case 1:
			piz.menu();
			save_cust_info();
		    goto tx;
		case 2:
			system("cls");
			customer_list();
		    goto tx;
		case 3:
			cout<<"Enter the Order no. of the customer to see Order\n";
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
	return 0;
}
