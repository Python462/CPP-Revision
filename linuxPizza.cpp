#include<iostream>
#include <windows.h>
#include<fstream>
using namespace std;
      void gotoxy(long x, long y) 
      {
           COORD pos = {x, y};
           SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      }
      ////////////////////////////////////
      frontpage()
      {
      	cout<<"\t       __      __        __\n";
 cout<<"\t      /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
 cout<<"\t      \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
 cout<<"\t       \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \|  ___/\n";
 cout<<"\t        \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
 
	  }
	  
	  //////////////////////////////////
	  int order;
      int quant=0;
      double cash;
      double change;
      char again;
      char another;
      int a,x;
      int cq=0;
class pizza
{
	public:
      char name [25],adr[25],ph[15];
      int amount=0;
      menu_list()
      {	
      system("cls");
        cout<<"\t\t\t\t\t   PIZZA MENU\n";
        cout<<"\t\t\t\t\t------------------\n";
             //////////////
   cout<<"\t\t\t\t    _____\n";
   cout<<"\t\t\t\t   /     \\   ____   ____    __ __\n";
   cout<<"\t\t\t\t  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
   cout<<"\t\t\t\t /    Y    \\  ___/|   |   \\|  |  |\n";
   cout<<"\t\t\t\t \\____|____/\\____>____|____|_____|\n\n";
             ///////////////
             gotoxy(5,7);
             cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
           gotoxy(5,8);
           cout<<"| 1. Double_Cheese_Pizza  P120.00 |" <<"\t\t|" <<"7. Cheese and Barbeque Chicken  P250.00 |";
           gotoxy(5,9);
           cout<<"| 2. Gourmet              P180.00 |" <<"\t\t|" <<"8. Tomato Pie                   P125.00 |";
           gotoxy(5,10);
           cout<<"| 3. Mexican Green Wave   P195.00 |" <<"\t\t|" <<"9. Cheese and Pepperoni         P225.00 |";
           gotoxy(5,11);
           cout<<"| 4. Peppy Paneer         P225.00 |" <<"\t\t|" <<"10. Golden Chicken Delight      P330.00 |";
           gotoxy(5,12);
           cout<<"| 5. Margherita Pizza     P140.00 |" <<"\t\t|" <<"11. Pepperoni Pizza             P220.00 |";
           gotoxy(5,13);
           cout<<"| 6. Meatzaa Pizza        P230.00 |" <<"\t\t|" <<"12. Mozzarella Stuffed Pizza    P215.00 |";
            gotoxy(5,14);
             cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
           gotoxy(5,15);
           cout<<"\n\t\tCustomer Name: ";
           cin.ignore();
           gets(name);
           gotoxy(5,16);
           cout<<"\n\t\tCustomer Address: ";
           gets(adr);
           gotoxy(5,17);
           cout<<"\n\t\tCustomer Phone_No: ";
           gets(ph);
          do
          {
          	p:
            cout<<"\n\t\tHello "<<name<<", welcome to PIZZA HUT\n\t\t Choose From Option 1 to 13\t\t\n";
            cin>>order;
            if(order>0 && order <13)
            {
            	cout<<"\n\t\tHow many orders will that be?: ";
                cin>>quant;
			}
			else
            {
         	cout<<"Invalid Option Choosen";
         	goto p;
			}
            if (order==1)
         {
            amount=amount+120*quant;
         }
         else if (order==2)
         {
            amount=amount+180*quant;
         }
         else if (order==3)
         {
            amount=amount+195*quant;
         }
         else if (order==4)
         {
            amount=amount+225*quant;
         }
         else if (order==5)
         {
            amount=amount+140*quant;
         }
         else if (order==6)
         {
            amount=amount+230*quant;
         }
         else if (order==7)
         {
            amount=amount+250*quant;
            cq=quant;
         }
         else if (order==8)
         {
            amount=amount+125*quant;
            cq=quant;
         }
         else if (order==9)
         {
            amount=amount+225*quant;
            cq=quant;
         }
         else if (order==10)
         {
            amount=amount+330*quant;
            cq=quant;
         }
         else if (order==11)
         {
            amount=amount+220*quant;
            cq=quant;
         }
         else if (order==12)
         {
            amount=amount+215*quant;
            cq=quant;
         }
         
         
            cout<<"Want to add an another order? (Y or N): ";
            cin>>again;
            cout<<"\n";
          }while (again=='y'||again=='Y');
              
    }
     
    void display()
    {
         cout<<"\n\tCustomer name:     \t"<<name;
         cout<<"\n\tCustomer Phone no: \t"<<ph;
         cout<<"\n\tCustomer Address:  \t"<<adr;
         cout<<"\n\tYour total amount is:\tP"<<amount;
         cout<<"\n\n\t\tThank you for ordering ~~"<<name<<", please come again soon! :)";
         cout<<"\n\n";
         cout<<"\t\t\t\t\t***end of program***";
         
      cout<<"\n\n";
    }
      
};

fstream f;
pizza piz;
 
void save_info()
{
	f.open("file.dat",ios::out|ios::app);
	f.write((char*)&piz,sizeof(piz));
	f.close();
	cout<<endl<<endl<<"Your Order Is Successful...";
	getchar();
}

void cancel_order()
{
	char num[20];
	system("cls");
	cout<<endl<<endl<<"Please Enter The Phone no #: ";
	cin>>num;
	f.open("file.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	f.seekg(0,ios::beg);
	while(f.read((char*)&piz,sizeof(piz)))
	{
		if(strcmp(piz.ph,num)!=0)
		{
			fp2.write((char*)&piz,sizeof(piz));
		}
	}
	fp2.close();
	f.close();
	remove("file.dat");
	rename("Temp.dat","file.dat");
	cout<<endl<<endl<<"\Order Deleted Welcome Back...";
}

///////////////
void order_list()
{
	system("cls");
	 cout<<"\n\t\t.................................\n\t\t\tLIST OF Customer\n\t\t...............................\n";
	f.open("file.dat",ios::in);
	while(f.read((char*)&piz,sizeof(piz)))
	{
		piz.display();
		cout<<endl<<"................................\n"<<endl;
	}
	f.close();
}

main()
{
	int choice;
	system("color 04");
	frontpage();
	z:
	cout<<"\n\t\t\tEnter Your Choice\n";
	cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"\t\t\t1 :Order PIZZA\n";
	cout<<"\t\t\t2 :View Ordered List\n";
	cout<<"\t\t\t3 :Cancel Order\n";
	cout<<"\t\t\t4 :exit\n";
	cin>>choice;
	switch(choice)
	{
	 case 1:
	    piz.menu_list();
	    save_info();
	    break;
	 case 2:
	 	order_list();
	 	break;
	 case 3:
	 	cancel_order();
	 	break;
	 case 4:	
	    exit(0);
		break;
	 default:
	    cout<<"Enter Valid option";		
    }    
    goto z;
    main();
}
