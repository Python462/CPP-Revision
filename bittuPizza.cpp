#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>    //exit
#include<unistd.h>     //sleep
#include<string.h>
using namespace std;
//int main();
view()
{
{
     cout<<"\n\n"<<endl<<endl;
	 cout<<"\t * * * * * * * * * * * * * * * * * * * *  \n";
     cout<<"\t *                                     *"<<endl;
     cout<<"\t *-------------------------------------*\n";
	 cout<<"\t *			  	                     *\n";
	 cout<<"\t * 		                             *"<<endl;
     cout<<"\t * 		           *"<<endl;
     cout<<"\t * 		            *"<<endl;
     cout<<"\t * 		                *"<<endl;
	 cout<<"\t *			  	       *\n";
	 cout<<"\t * * * * * * * * * * * * * * * * * * * *"<<endl;
     cout<<"\n\t ";
}
}

/////////////////////////////////

entry_page()
{
	    int n;
		cout<<" \n         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n\n";
		cout<<"                          ----------------------- \n";
		cout<<"                            1.Menu List         \n";
		cout<<"                            2.Ordered List     \n";
		cout<<"                            3.Show Order        \n";
		cout<<"                            4.Change Order      \n";
		cout<<"                            5.Exit              \n";
	    cout<<"                          ----------------------- \n\t\t";
		cin>>n;
		return (n);
}

///////////////////////////////////////
//string piza,burger,beverg;

//////////////////////////////////////
class pizza
{
	char name[20],oi[20],add[20];
    char piza[20],crust[20],siz[20];
    int qnt=0,sizbill=0;
	float bill=0,cstbill=0;
	public:
	
		void address()
	{
            cout<<"OrderId ";
            cin.ignore();
            gets(oi);
            
            cout<<"Name: ";
            gets(name);
            
			cout<<"Address: ";
            gets(add);                                             
            cout<<"\n";
	}
	
		void ordered_list()
	{
		cout<<endl<<"\t\t______________________________________";
		cout<<endl<<"\t\tOrderId :\t\t "<<oi;
		cout<<endl<<"\t\tName: \t\t\t"<<name;
		cout<<endl<<"\t\tAddress: \t\t"<<add;
		cout<<endl<<"\t\t"<<siz<<" :\t\t"<<piza;
		cout<<endl<<"\t\t"<<"Total bill =$"<<"Bill x Pizza size x Quantity + crust bill\n";	
		cout<<endl<<"\t\t"<<"           =$"<<bill <<" x "<<sizbill<<" x "<<qnt<<" + "<<cstbill<<" = $"<<(bill*sizbill*qnt) + cstbill;
		cout<<endl<<"\t\t_______________________________________";
	}
	
	char* orderId()
	{
		return oi;
	}
	
	char* getName()
	{
		return name;
	}
	
	char* getAddress()
	{
		return add;
	}
	
	int n=0,opt=0;
	void menu()
	{
		
	cout<<"\t\tPizza Selection\n";
	cout<<"\t\t*****************************\n";
	cout<<"\t\t Pizza_list\t\t\tPrice_cost\n";
	cout<<"\t\t1: Margherita\t\t\t$1.2\n";
	cout<<"\t\t2: Peepy Paneer\t\t\t$1.5\n";
	cout<<"\t\t3: Farm house\t\t\t$2\n";
	cout<<"\t\t4: Deluxe Veggie\t\t$2.5\n";
	cout<<"\t\t5: Not Intrested\n";
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
	   
	    cout<<"\t\tEnter the quantity of Pizza You Want";
	    cin>>qnt;
	      x:
	      cout<<"\t\tSelect the size of PIZZA\n";
	      cout<<"\t\t******************************\n";
	      cout<<"\t\t1 :Small Size\n";
	      cout<<"\t\t2 :Medium Size\n";
	      cout<<"\t\t3 :Large Size\n"; 
	      cin>>opt;
	      switch(opt)
	   {
	 	case 1:
	 		strcpy(siz,"Small Size");
	 		sizbill=1;
	 		break;
	 	case 2:
	 		strcpy(siz,"Medium size");
	 		sizbill=2;
			break;
		case 3:
	 		strcpy(siz,"Large size");
	 		sizbill=3;
			break;	
		default:
		    cout<<"Enter Valid Choice";	 	
	 		goto x;
	   }
	 		
			int opt;
			 y:
	cout<<"\t\tNeed special Crust\n";
	cout<<"\t\t**********************************\n";
	cout<<"\t\t Crust_list\t\t\tPrice_cost\n";
	cout<<"\t\t1: Fresh Pan\t\t\t$1\n";
	cout<<"\t\t2: Cheese Burst\t\t\t$1.2\n";
	cout<<"\t\t3: Wheat thin crust\t\t$1.3\n";
	cout<<"\t\t4: No Need\n";

	cin>>opt;
	
	   switch(opt)
	   {
	 	case 1:
	 		strcpy(crust,"Fresh Pan");
	 		cstbill=1;
	 		break;
	 	case 2:
	 		strcpy(crust,"Cheese Burst");
	 		cstbill=1.2;
	 		break;
		case 3:
	 		strcpy(crust,"Wheat Thin crust");
	 		cstbill=1.3;
	 		break;	   	 	
	 	case 4:
	 		cout<<"/t/tEnjoy your order";
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		goto y;
	   }
}
};  
 
fstream fp;
pizza piz;
 
void save_contact()
{
	fp.open("data.txt",ios::out|ios::app);
	piz.address();
	fp.write((char*)&piz,sizeof(piz));
	fp.close();
	cout<<endl<<endl<<"YOUR ORDER IS SUCCESSFUL...";
	getchar();
}
 
void Ordered_list()
{
	system("cls");
	 cout<<"\n\t\t...............................\n\t\t\tOrdered List\n\t\t................................\n";
	fp.open("data.txt",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		piz.ordered_list();
		cout<<endl<<"::::::::::::::::::::::::::::::::::::::::\n"<<endl;
	}
	fp.close();
}

void show_order(char* num)
{
	bool found;
	int ch;

		 found=false;
	fp.open("data.txt",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		if(strcmp(piz.orderId(),num)==0)
		{
			system("cls");
			piz.ordered_list();
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
	char num[20];
	bool found=false;
	system("cls");
	cout<<"\n\t\t===============================\n\n\t..::Enter the Order ID of customer to edit:";
	cin>>num;
    //gets(num);
	fp.open("data.txt",ios::in|ios::out);
	while(fp.read((char*)&piz,sizeof(piz)) && found==false)
	{
		
		if(strcmp(piz.orderId(),num)==0)
		{
			piz.ordered_list();
            cout<<"\nPlease Enter The New Details of Order: "<<endl;
			piz.address();
			int pos=-1*sizeof(piz);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&piz,sizeof(piz));
			cout<<endl<<endl<<"\t Order Successfully Updated...";
			found=true;
		}
	}
	fp.close();
	if(found==false)
		cout<<endl<<endl<<"\t\tContact Not Found...";
 
 
}
 
 
//////////////////////////////////
int main()
{
	system("color f4");
	char num[20];
	int t;
	view();
	p:
	t=entry_page();
	switch(t)
	{
		case 1:
			piz.menu();
			save_contact();
		    goto p;
		case 2:
			system("cls");
			Ordered_list();
		    goto p;
		case 3:
			cout<<"Enter the Order no. of the customer to see Order\n";
			cin>>num;
			show_order(num);
			goto p;
		case 4:
		    change_order();
		    goto p;    
		case 5:
		    exit (0);	
		default:
			printf("                               Enter Valid Option\n");
		    goto p;	     	
	}
	main();
	return 0;
}
