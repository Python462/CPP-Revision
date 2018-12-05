
//C++ PROGRAM FOR PIZZA HUT MANAGEMENT

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<dos.h>
#include<windows.h>
using namespace std;
int flag=0;

void gotoxy(long x, long y) 
      {
           COORD pos = {x, y};
           SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      }
      
class pizza               
{ 
    public:
    int book_no;
    char name[40];
    int pizza_cost;
    char phone[40];
    char piza_menu[40];
    void login_page();
    void main_menu();    
    void book();        
    void display();    
    void booked();   
    void edit();
    int check(int);    
    void modify(int);    
    void delete_rec(int);
 
    piza_var()
    {
    	
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
    	
    	int opt;
    	t:
    	cout<<"Select the variety of pizza you want:"<<endl;
    	cout<<"\t\tSelect Pizza \n";
        cout<<"\t\t1:Marinara_pizza:     price = 120 \n";
        cout<<"\t\t1:Margherita_pizza:   price = 180 \n";
        cout<<"\t\t1:Chicago_pizza:      price = 99 \n";
        cout<<"\t\t1:Sicilian pizza:     price = 99 \n";
        cout<<"\t\t1:Greek_pizza:        price = 199 \n";
    
    cin>>opt;
    	
    	
    	switch(opt)
    	{
    		case 1:
    			
    			pizza_cost=120;
    			strcpy(piza_menu,"Marinara_pizza");
    			break;
    			
    		case 2:
    			
    			pizza_cost=180;
    			strcpy(piza_menu,"Margherita_pizza");
    			break;
    			
    		case 3:
    			
    			pizza_cost=99;
    			strcpy(piza_menu,"Chicago_pizza");
    			break;
    		case 4:
    			
    			pizza_cost=99;
    			strcpy(piza_menu,"Sicilian pizza");
    			break;
    		case 5:
    			
    			pizza_cost=199;
    			strcpy(piza_menu,"Greek_pizza");
    			break;
    			
    		default:
			     cout<<"enter valid option\n";
				 goto t;		
    				
		}
	}
	
     
};

int main();
pizza hut;
void pizza::main_menu()
{
	
	if(flag!=1)
	 main();
	 
	 else
	 {
	 	
    int choice;
    while(choice!=5)
    {
    	
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\t\t\t\t* MAIN MENU *";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\n\n\t\t\t1.BOOK PIZZA";
        cout<<"\n\t\t\t2.CUSTOMER RECORD";
        cout<<"\n\t\t\t3.PIZZA ORDERED";
        cout<<"\n\t\t\t4.Edit Record";
        cout<<"\n\t\t\t5.Exit";
        cout<<"\n\n\t\t\tEnter Your Choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: book();
                    break;
            case 2: display();
                    break;
            case 3: booked();
                    break;
            case 4: edit();
                    break;
            case 5: break;
            default:
                    {
                        cout<<"\n\n\t\t\tWrong choice!!!";
                        cout<<"\n\t\t\tPress any key to continue!!";
                        getch();
                    }
    }
}
}

}

login_page()
{  
    int password;
    int option_1;
    int mob;
    char email[50];
    char username[20];
    int default_password=12345;
	char default_username[20]="rahul";  
	cout<<"FOR LOGIN PRESS 1"<<endl;
	cin>>option_1;
	if(option_1=1)
	{
	cout<<"ENTER USERNAME"<<endl;
	cin>>username;
	cout<<"PASSWORD"<<endl;
	cin>>password;
	if(strcmp(username,"rahul")==0 && password==12345)
	{
		cout<<"LOGIN success"<<endl;
		flag=1;
	}
	else
	{
	cout<<"LOGIN failed"<<endl;
	}

}
	
};
    
 void pizza::book()
 
{

    int r,flag;
    ofstream fout("Record.txt",ios::app);
    cout<<"\n Enter Customer Details";
    cout<<"\n **********************"<<endl;
    cout<<"--------------------------";
    cout<<"\n\n Registration No: ";
    cin>>r;
    flag=check(r);
        book_no=r;
        cout<<" Your Name: "<<endl;
        cin>>name;
        //cout<<" pizza_cost: "<<endl;
        //cin>>pizza_cost;
        cout<<" Phone No: "<<endl;
        cin>>phone;
        piza_var();
        fout.write((char*)this,sizeof(pizza));
        cout<<"\n Pizza is booked!!!";
        cout<<"\n Press any key to continue!!";
        getch();
        fout.close();
}

void pizza::display()
{
	
    ifstream fin("Record.txt",ios::in);
    int r,flag;
    cout<<"\n Enter Reg no: ";
    cin>>r;
    
    while(fin.read((char*)this,sizeof(pizza)))
    {
        
        if(book_no==r)
        {
            cout<<"\n Customer Details";
            cout<<"\n ****************";
            cout<<"\n\n Registration No: "<<book_no;
            cout<<"\n Name: "<<name;
            cout<<"\n Total Bill: "<<pizza_cost;
            cout<<"\nPizza Variety: "<<piza_menu;
            cout<<"\n Phone No: "<<phone;
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    {
    	
        cout<<"\n Sorry no pizza is booked from this order";
        cout<<"\n\n Press any key to continue!!";
        getch();
        fin.close();
    }
}

void pizza::booked()
{
	
    ifstream fin("Record.txt",ios::in);
    cout<<"\n\t\t\tList Of Pizza Booked";
    cout<<"\n\t\t\t*********************";
    cout<<"\n\n Reg No.\t\tName\t\tPizza Cost\t\tPhone No.\n";

    while(fin.read((char*)this,sizeof(pizza)))
    {
        cout<<"\n\n "<<book_no<<"\t\t"<<name;
        cout<<"\t\t"<<pizza_cost<<"\t\t\t"<<phone;
    }
    
    cout<<"\n\n\n\t\t\tPress any key to continue!!";
    getch();
    fin.close();
}

void pizza::edit()
{
    int choice,r;
    
    cout<<"\n EDIT MENU";
    cout<<"\n *********";
    cout<<"\n\n 1.Modify Customer Record";
    cout<<"\n 2.Delete Customer Record";
    cout<<"\n Enter your choice: ";
    cin>>choice;
    cout<<"\n Enter Reg no: ";
    cin>>r;
    switch(choice)
    {
    	
        case 1: modify(r);
                break;
        case 2: delete_rec(r);
                break;
        default: cout<<"\n Wrong Choice!!";
        
    }
    
    cout<<"\n Press any key to continue!!!";
    getch();
}
 
int pizza::check(int r)
{
    int flag=0;
    ifstream fin("Record.txt",ios::in);
    while(!fin.eof())
    {
    	
        fin.read((char*)this,sizeof(pizza));
        if(book_no==r)
        {
            flag=1;
                break;
        }
        
    }
    
    fin.close();
    return(flag);
}

void pizza::modify(int r)
{
    long pos,flag=0;
    fstream file("Record.txt",ios::in|ios::out);
    
    while(!file.eof())
    
    {
        pos=file.tellg();
        file.read((char*)this,sizeof(pizza));
        if(book_no==r)
        {
        	
            cout<<"\n Enter New Details";
            cout<<"\n *****************";
            cout<<"\n Name: ";
            cin>>name;
            cout<<" Regestration Number: ";
            cin>>book_no;
            cout<<" Phone no: ";
            cin>>phone;
            
            file.seekg(pos);
            file.write((char*)this,sizeof(pizza));
            cout<<"\n Record is modified!!";
            flag=1;
            break;
        }
        
        
    }
    
    if(flag==0)
    
        cout<<"\n No pizza is booked";
        
    file.close();
    
}

 fstream fp;
void pizza::delete_rec(int r)
{
	system("cls");
	//cout<<endl<<endl<<"Please Enter The contact #: ";
	//cin>>num;
	fp.open("Record.txt",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)this,sizeof(pizza)))
	{
		if(book_no!=r)
		{
			fp2.write((char*)this,sizeof(pizza));
		}
	}
	fp2.close();
	fp.close();
	remove("Record.txt");
	rename("Temp.dat","Record.txt");
	cout<<endl<<endl<<"\tContact Deleted...";
}
 int main()
 
{  

//system("color 60");

 pizza hut;
    cout<<"\n\t\t\t********************************";
    cout<<"\n\t\t\t* PIZZA HUT  MANAGEMENT SYSTEM *";
    cout<<"\n\t\t\t********************************"<<endl;
    cout<<"\n\t\t\tDOMINO'S PIZZA WELCOMES YOU HERE"<<endl<<endl;
    cout<<"\n\t\t_____________________________________________________________"<<endl;
    cout<<"\n\t\tNow Dominos Pizzas @ ?99 Each | Not Just Today, But Everyday?";
    cout<<"\n\t\t\t______________JUST GRAB IT______________"<<endl;
    cout<<"\n\n\n\n\t\t\tMade By:......";
    cout<<"... RAHUL SONI STUDENT OF BTECH CSE........";
    cout<<"\n\n\n\n\n\t\t\t\tPress any key to continue!!"<<endl;
    getch();
    
    login_page();
    hut.main_menu();
    
};
 
