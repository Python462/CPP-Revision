#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
class pizza
{
	public:
		char name[20],adrs[20];
 int drinks, food;
 int qty1, qty2;
 float totalfood, totaldrinks;
 
 ////////////////
 void address()
 {
 	cout<<"\t\tEnter Your Name:\n";
 	cin>>name;
 	cout<<"\t\tEnter Your Address:\n";
 	cin>>adrs;
 }
 
 ////////////////
 void menu()
 {
 	 int n;
 	 cout<<"\t\tPlease select from the option:\n";
 	
  cout<<"\t   Fast Food  Cashiering    \n";
 cout<<"-------------------FOOD------------------\n";
 cout<<" [ 1 ]  -  BURGER\t\tPhp 25.00\n";
 cout<<" [ 2 ]  -  SPAGHETTI\t\tPhp 30.00\n";
 cout<<" [ 3 ]  -  CHICKEN W/ RICE\tPhp 75.00\n";
 cout<<"-----------------------------------------\n";
 cout<<" \nSelect your food order: \n";
 ///////
 cin>>food;
 cout<<"Enter Quantity: \n";
 cin>>qty1;

 //////////////
 cout<<"\n------------------DRINKS-----------------\n";
 cout<<" [ 1 ]  -  COCA COLA\t\tPhp 15.00\n";
 cout<<" [ 2 ]  -  ICED TEA\t\tPhp 20.00\n";
 cout<<"-----------------------------------------\n";
 cout<<" \nSelect your drinks order: \n";
 cin>>drinks;
 cout<<"Enter Quantity: \n";
 cin>>qty2;
 
   } 

 //system("pause");
 //////////////////////////////////////
 
 void display()
 {
 	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
 	cout<<"Name:   "<<name;
 	cout<<"\nAddress: "<<adrs;
 if (food == 1 && drinks == 1)
 {
  cout<<"\n--------------------ITEMS ORDERED--------------------\n";
  cout<<"BURGER\t\t\t\tPhp 25.00 x "<<qty1<<" = "<< 25.0 * qty1<<endl;
  cout<<"COCA COLA\t\t\tPhp 15.00 x "<<qty2<<" = "<<15.0 * qty2<<endl;
  cout<<"-----------------------------------------------------\n";
  totalfood = qty1 * 25;
  totaldrinks = qty2 * 15;
  cout<<"Total:\t\t\t\t\t     Php%."<<totalfood + totaldrinks<<endl;
 }
  else if (food == 1 && drinks == 2)
 {
  cout<<"\n--------------------ITEMS ORDERED--------------------\n");
  printf("BURGER\t\t\t\tPhp 25.00 x %d = %.2f\n", qty1, 25.0 * qty1);
  printf("ICED TEA\t\t\tPhp 20.00 x %d = %.2f\n", qty2, 20.0 * qty2);
  printf("-----------------------------------------------------\n");
  totalfood = qty1 * 25;
  totaldrinks = qty2 * 20;
  printf("Total:\t\t\t\t\t      Php%.2f\n", totalfood + totaldrinks);
 }
  else if (food == 2 && drinks == 1)
 {
  printf("\n--------------------ITEMS ORDERED--------------------\n");
  printf("SPAGHETTI\t\t\tPhp 30.00 x %d = %.2f\n", qty1, 30.0 * qty1);
  printf("COCA COLA\t\t\tPhp 15.00 x %d = %.2f\n", qty2, 15.0 * qty2);
  printf("-----------------------------------------------------\n");
  totalfood = qty1 * 30;
  totaldrinks = qty2 * 15;
  printf("Total:\t\t\t\t\t     Php%.2f\n", totalfood + totaldrinks);
 }
  else if (food == 2 && drinks == 2)
 {
  printf("\n--------------------ITEMS ORDERED--------------------\n");
  printf("SPAGHETTI\t\t\tPhp 30.00 x %d = %.2f\n", qty1, 30.0 * qty1);
  printf("ICED TEA\t\t\tPhp 20.00 x %d = %.2f\n", qty2, 20.0 * qty2);
  printf("-----------------------------------------------------\n");
  totalfood = qty1 * 30;
  totaldrinks = qty2 * 20;
  printf("Total:\t\t\t\t\t     Php%.2f\n", totalfood + totaldrinks);
 }
  else if (food == 3 && drinks == 1)
 {
  printf("\n--------------------ITEMS ORDERED--------------------\n");
  printf("CHICKEN W/ RICE\t\t\tPhp 75.00 x %d = %.2f\n", qty1, 75.0 * qty1);
  printf("COCA COLA\t\t\tPhp 15.00 x %d = %.2f\n", qty2, 15.0 * qty2);
  printf("-----------------------------------------------------\n");
  totalfood = qty1 * 75;
  totaldrinks = qty2 * 15;
  printf("Total:\t\t\t\t   Php%.2f\n", totalfood + totaldrinks);
 }
 else if (food == 3 && drinks == 2)
 {
  printf("\n--------------------ITEMS ORDERED--------------------\n");
  printf("CHICKEN W/ RICE\t\t\tPhp 75.00 x %d = %.2f\n", qty1, 75.0 * qty1);
  printf("ICED TEA\t\t\tPhp 20.00 x %d = %.2f\n", qty2), 20.0 * qty2;
  printf("-----------------------------------------------------\n");
  totalfood = qty1 * 75;
  totaldrinks = qty2 * 20;
  printf("Total:\t\t\t\tPhp%.2f\n", totalfood + totaldrinks);
 }
 else
 {
  printf("\n---------------ITEMS ORDERED-------------\n");
  printf("\t\tINVALID MEAL AND DRINKS\n");
  printf("-----------------------------------------\n");
 }
 //////////////////////////////////////////////////
}
  //system("pause");
};


fstream fp;
pizza piz;

void show_info()
{
	fp.open("raja.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		piz.display();
		cout<<endl<<"=================================================\n"<<endl;
	}
	fp.close();
}
int main()
{
	
	system("color 30");
	int n;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"\t\tEnter Your choice:\n";
	cout<<"\t\t1 : Menu\n";
	cout<<"\t\t2 : Display Record\n";
	cout<<"\t\t3 : Exit\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cin>>n;
	switch(n)
	{
		case 1:
			piz.menu();
			piz.address();
			break;
			
		case 2:
		    show_info();
		    main();
			break;
				
		case 3:	
		    exit (0);
		default:
			cout<<"Enter valid option";
			break;
	}
	fp.open("raja.dat",ios::out|ios::app);
	fp.write((char*)&piz,sizeof(piz));
	fp.close();
	cout<<endl<<endl<<"Order Has Been Sucessfully Placed...";
	getchar();
}


