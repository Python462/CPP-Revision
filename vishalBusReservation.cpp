#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include<windows.h>

using namespace std;
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
	cout<<"\t   |\t\t                           PIZZA HUT                                        |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	cout<<"\t   |\t\t        BY:                                         GUIDE:                  |\n";
	cout<<"\t   |\t\t     -------------                                -----------               |\n";
	cout<<"\t   |\t\t   VIKRANT CHAUDHARY                         Mr. PRAVEEN SEHGAL Sir         |\n";
	cout<<"\t   |\t\t   Reg No.-> 11703065                                                       |\n";
	cout<<"\t   |\t\t   Roll NO.->52                                                             |\n";
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
}

static int p=0;
class atrans
{
char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],
seat[8][4][10];
public:
void install();
void allotment();
void empty();
void show();
void available();
void position(int i);
}bus[5];//here we declare the number of buses we can have.
void vline(char ch)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1 );
for (int i=80;i>0;i--)//Here i's value will depend on your computer.
cout<<ch;
}
void atrans::install()
{
cout<<"Enter bus no: ";
cin>>bus[p].busn;
cout<<"\n Enter Driver's name: ";
cin>>bus[p].driver;
cout<<"\n Departure: ";
cin>>bus[p].depart;
cout<<"\n Arrival time: ";
cin>>bus[p].arrival;
cout<<"\n From: \t\t\t";
cin>>bus[p].from;
cout<<"\n To: \t\t\t";
cin>>bus[p].to;
bus[p].empty();
p++;
}
void atrans::allotment()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
int seat;
char number[5];
top:
cout<<"Bus no: ";
cin>>number;
int n;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
while(n<=p)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3 );
cout<<"\n Seat number: ";
cin>>seat;
if (seat>32)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4 );
cout<<"\n There are only 32 seats available in this bus.";
}
else
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4 );
if (strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5 );
cout<<"Enter passanger's name: ";
cin>>bus[n].seat[seat/4][(seat%4)-1];
break;
}
else
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5 );
cout<<"The seat no. is already reserved.\n";
}
}
}
if (n>p)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6 );
cout<<"Enter correct bus no.\n";
goto top;
}
}
void atrans::empty()
{
for(int i=0;i<8;i++)
{
for(int j=0;j<4;j++)
{
strcpy(bus[p].seat[i][j],"Empty");
}
}
}
void atrans::show()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1 );
int n;
char number[5];
cout<<"Enter bus no: ";
cin>>number;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
while (n<=p)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
vline('*');
cout<<" Bus no: \t"<<bus[n].busn
<<"\n Driver: \t"<<bus[n].driver<<"\t\t Departure time:\t"
<<bus[n].depart<<"\t Arrival time:\t"<<bus[n].arrival
<<"\n From:\t Melaka Station\t"<<bus[n].from<<"\t\t To: \t\t\t"<<
bus[n].to<<"\n";
vline('*');
bus[0].position(n);
int a=1;
for (int i=0;i<8;i++)
{
for(int j=0;j<4;j++)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3 );
a++;
if(strcmp(bus[n].seat[i][j],"Empty")!=0)
cout<<"\n The seat no "<<a-1<<" is reserved for "<<bus[n].seat[i][j]<<" .";
}
}break;
}	if(n>p)
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4 );
cout<<"enter correct bus no.";
}
void atrans::position(int l)
{
int s=0,p=0;
for(int i=0;i<8;i++)
{
cout<<"\n";
for(int j=0;j<4;j++)
{
s++;
if(strcmp(bus[l].seat[i][j],"Empty")==0)
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
p++;
}
else
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
}
}
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
cout<<"\n\n\t\t\t There are "<<p<<" seats empty in Bus No: "<<bus[l].busn;
}
void atrans::available()
{
for(int n=0;n<p;n++)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5 );
vline('*');
cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time:\t"<<bus[n].arrival<<"\tDeparture Time: \t"<<bus[n].depart<<"\n From: \t\t"<<bus[n].from<<"\t\t To: \t\t\t"<<bus[n].to<<"\n";
vline('*');
vline('_');
}
}
int main()
{
homepage();
int w;
while(1)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
cout<<"\t\t*****************************************************"<<endl;
cout<<"\t\t******* *******"<<endl;
cout<<"*\t\t The Administrator *"<<endl;
cout<<"*\t\t Vishal Transport Service *"<<endl;
cout<<"******* *******"<<endl;
cout<<"*****************************************************"<<endl;

cout<<"\t\t\t 1.Install\n\t\t\t 2.Reservation\n\t\t\t 3.Show \n\t\t\t 4.Buses Available. \n\t\t\t 5.Exit";
cout<<"\n\t\t\t Enter your choice:-> ";
cin>>w;
switch(w)
{
case 1:
bus[p].install();
break;
case 2:
bus[p].allotment();
break;
case 3:
bus[0].show();
break;
case 4:
bus[0].available();
break;
case 5:
exit(0);
}
}
}
 
