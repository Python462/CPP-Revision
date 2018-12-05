#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
 string x;
class pizza
{
    int a;
    float tax;
public:
    float bill=0,dis=0,adis=0;
    void input()
    {
        cin>>a;
    }
    void more()    
	{
         cout<<"Press 1 for pizza\npress 2 for burger\npress 3 for floaters\npress 4 for cold-drinks\nPress 0 to exit\n"<<endl;
         input();
         exi();
         types();
    }
    void exi()
    {
    	if(a==0)
    	{
    		exit(0);
		}
	}
	
    void file()
    {
    	ofstream fout;
		fout.open("lemon.dat",ios::out|ios::app);
    	fout<<"\t\t\t\t~~~~~~~~Pizza Couisine~~~~~~~~~\t\t\t\n\n";
    	fout<<"\t\t\t\tNAME\t\t\t:"<<x<<endl;
    	fout<<"\t\t\t\tVALUE\t\t\t:"<<bill<<" Rs"<<endl<<"\t\t\t\tSERVICE TAX\t\t\t\t:"<<(tax=(bill*7.5)/100)<<" Rs"<<endl;
    	fout<<"\t\t\t\tDISCOUNT\t\t:"<<dis<<" Rs\n"<<"\t\t\t\tAFTER DISCOUNT  :"<<adis<<" Rs\n";
    	fout<<"\t\t\t\tTOTAL BILL\t\t:"<<((bill+tax)-dis)<<" Rs\n\n";
    	fout<<"\t\t\t\t********THANK YOU! DO VISIT AGAIN!!!!********\n";
    	fout<<"\t\t\t\t For other details and offers do visit our website www.pizzacousine.in   \n\n\n";
    	fout<<"vineet is on duty leave";
    	fout.close();
	}
	void discount()
	{
		if(bill>=1500)
		{
			cout<<"You got a discount of 25%\n";
			dis=(bill/100)*25;
			adis=bill-dis;
			file();
		}	
	}
    void types()
    {
        if(a==1)
        {
            cout<<"These are the types of pizza\n\n";
            cout<<" |-------------------------------|\n";
	        cout<<" |  1.VEG       |   2.NON-VEG    |\n";
	        cout<<" |-------------------------------|\n";
            cout<<"press 1 for veg\npress 2 for non-veg\n";
            input();
            if(a==1)
            {
                cout<<"\tThese are the items available in veg section\n\n";
                cout<<" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
	            cout<<" | 1.Margherita  ||  2.CAPSICUM PIZZA  ||  3.PANEER PIZZA  ||  4.Cheese & Tomato  ||  5.Farmhouse  |\n";
	            cout<<" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
                
                input();
                if(a==1)
                {
                    cout<<"\tThese are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                    cout<<"\tYou have purchased small Margherita\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+99;
                    }
                    else if(a==2)
                    {
                    cout<<"\tYou have purchased medium Margherita\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+249;                      
                    }
                    else if(a==3)
                    {
                    cout<<"\tYou have purchased large Margherita\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+499;  
                    }
                    else
                    {
                        cout<<"!!!!!You have entered the invalid key please try again!!!!!\n";
                        more();
                    }
                    input(); 
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
                    
                }
                else if(a==2)
                {
                	cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                    cout<<"You have purchased small capsicum pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                    bill=bill+199;                       
                    }
                    else if(a==2)
                    {
                    cout<<"You have purchased medium capsicum pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                    bill=bill+249;    
                    }
                    else if(a==3)
                    {
                    cout<<"You have purchased large capsicum pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                    bill=bill+499;
                    }
                    else
                    {
                    	cout<<"You have entered the invalid key please try again\n";
                    	more();
					}
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
				}
				else if(a==3)
				{
					cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased paneer pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+99;                        
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium paneer pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+249;                     
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large paneer pizza\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+499;                       
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
				}
				else if(a==4)
				{
					cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased Cheese & Tomato\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+99;                        
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium Cheese & Tomato\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+249;                     
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large Cheese & Tomato\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+499;                       
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
				}
				else if(a==5)
				{
					cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased farmhouse\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+99;                        
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium farmhouse\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+249;                     
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large farmhouse\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+499;                       
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
				}
				
            }
			else if(a==2)
            {
                cout<<"These are the items available in non-veg section\n\n";
                cout<<" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
	            cout<<" | 1.Chicken Golden Delight  ||  2.Cheese & Bbq Chicken  ||  3.Chicken Mexicana  |\n";
	            cout<<" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
                cout<<" 1.Chicken Golden Delight\n 2.Cheese & Bbq Chicken\n 3.Chicken Mexicana\n 4.Meatzaa\n 5.Non Veg Extravaganza"<<endl<<endl;
                input();
                if(a==1)
                {
                    cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                    cout<<"You have purchased small Chicken Golden Delight\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+139;                    
                    }
                    else if(a==2)
                    {
                    cout<<"You have purchased medium Chicken Golden Delight\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+249;
                        
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased Chicken Golden Delight\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+509;                     
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
                }
                else if(a==2)
                {
                	cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased small Cheese & Bbq Chicken\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+199;                    
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium Cheese & Bbq Chicken\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+269;           
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large Cheese & Bbq Chicken\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+549;                    
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                        file();
				}
				else if(a==3)
				{
						cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased Chicken Mexicana\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+199;                         
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium Chicken Mexicana\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+269;
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large Chicken Mexicana\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+599;                    
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more(); 
					}
					else if(bill<=1500)
                    file();
				}
				else if(a==4)
				{
						cout<<"These are the size with price in this pizza\n\n";
                    cout<<" |------------|   |-------------|   |-----------|\n";
	                cout<<" |   1.SMALL  |   |  2.MEDIUM   |   |  3.LARGE  | \n";
	                cout<<" |------------|   |-------------|   |-----------|\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased small Meatzaa\nPress 9 to buy more items\nPress 7 to delete items\n";
                            bill=bill+199;                         
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased medium Meatzaa\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+269;
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased large Meatzaa\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+599;                    
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more(); 
					}
					else if(bill<=1500)
                    file();
				}
				
				
			}
			else 
        	{
        		cout<<"You have entered invalid key please try again\n";
        		more();
			}	
        }
        else if(a==2)
        {
            cout<<"These are the types of Burger\n\n";
            cout<<" 1.VEG\n 2.NON-VEG\n\n";
            cout<<"press 1 for veg\npress 2 for non-veg\n";
            input();
            if(a==1)
            {
                cout<<"These are the items available in veg section with their prices\n\n";
                cout<<" 1.CRISPY QUINOA BURGERS\t:99 Rs\n 2.VEGAN BEAN BURGERS\t:89 Rs\n 3.ZUCCHINI CUTLET\t:99 Rs\n"<<endl<<endl;
                input();
                    if(a==1)
                    {
                        cout<<"You have purchased CRISPY QUINOA BURGERS\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+99;
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased VEGAN BEAN BURGERS\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+89;                  
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased ZUCCHINI CUTLET\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+99;               
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
            		}
            		else if(bill<=1500)
                    file();
            }
            	else if(a==2)
                {
                	cout<<"These are the items present in non-veg section with price\n\n";
                    cout<<" 1.EGG BURGER\t\t\t:109 Rs\n 2.CRISPY CHICKEN BURGER\t:119 Rs\n 3.GRILLED CHICKEN BURGER\t:149 Rs\n";
                    input();
                    if(a==1)
                    {
                            cout<<"You have purchased EGG BURGER\nPress 9 if want to buy more items\nPress 7 to delete items\n";
                            bill=bill+109;
                    }
                    else if(a==2)
                    {
                        cout<<"You have purchased CRISPY CHICKEN BURGER\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+119;           
                    }
                    else if(a==3)
                    {
                        cout<<"You have purchased GRILLED CHICKEN BURGER\nPress 9 to buy more items\nPress 7 to delete items\n";
                        bill=bill+99;    
                    }
                    else
                    {
                        cout<<"You have entered the invalid key please try again\n";
                        more();
                    }
                    input();
                    if(a==9)
                    {
                        more();
                    }
                    else if(bill<=1500)
                    file();
				}
				else 
				{
					cout<<"You have entered invalid key please try again\n";
					more();
				}
		}
		else if(a==3)
		{
			cout<<"These are the ice-cream available in shop with their prices\n\n";
			cout<<" 1.CHOCOLATE ICE-CREAM\t\t:49 Rs\n 2.VENILLA ICE-CREAM\t\t:69 Rs\n";
			cout<<"3.STRAUBERRY ICE-CREAM\t\t:79 Rs\n 4.BUTTERSCOTCH ICE-CREAM\t:101 Rs\n";
            input();
            if(a==1)
            {
            	cout<<"You have purchased CHOCOLATE ICE-CREAM\nPress 9 to buy more items\nPress 7 to delete items\n";
                bill=bill+49;
			}
			else if(a==2)
			{
				cout<<"You have purchased VENILLA ICE-CREAM\nPress 9 to buy more items\nPress 7 to delete items\n";
                bill=bill+69;
			}
			else if(a==3)
			{
				cout<<"You have purchased STRAUBERRY ICE-CREAM\nPress 9 to buy more items\nPress 7 to delete items\n";
                bill=bill+79;             
			}
			else if(a==4)
			{
				cout<<"You have purchased BUTTERSCOTCH ICE-CREAM\nPress 9 to buy more items\nPress 7 to delete items\n";
                bill=bill+101;        
			}
			else
			{
            	cout<<"You have entered the invalid key please try again\n";
            	more();
        	}
        	input();
            if(a==9)
            {
                more();
            }
            else if(bill<=1500)
            file();
        }
        else if(a==4)
        {
        	cout<<"These are the cold-drinks available in shop with their prices\n\n";
			cout<<" 1.COKE\t\t:49 Rs\n 2.THUMS UP\t:49 Rs\n 3.MOUNTAIN DEW\t:49 Rs\n 4.SPRITE\t:49 Rs\n";
            input();
            if(a==1)
            {
            	cout<<"You have purchased coke\nPress 9 to buy more items\nPress 7 to delete items\n";
				bill=bill+49;	
			}
			else if(a==2)
			{
				cout<<"You have purchased thums up\nPress 9 to buy more items\nPress 7 to delete items\n";
				bill=bill+49;	
			}
			else if(a==3)
			{
				cout<<"You have purchased mountain dew\nPress 9 to buy more items\nPress 7 to delete items\n";
				bill=bill+49;	
			}
			else if(a==4)
			{
				cout<<"You have purchased sprite\nPress 9 to buy more items\nPress 7 to delete items\n";
				bill=bill+49;
			}
			else
			{
				cout<<"You have entered the invalid key please try again\n";
				more();
			}
            input();
            if(a==9)
            {
                more();
            }
            else if(bill<=1500)
            file();
		}
		else 
		{
			cout<<"You entered invalid key please try again\n";
			more();
		}
	}	
};
main()
{
	system ("color E4");
	long long y;
	cout<<"            ********   *******   *********  *********          *\n";
	cout<<"            *       *     *             *          *          * *\n";
	cout<<"            *       *     *            *          *          *   *\n";
	cout<<"            *       *     *           *          *          *     *\n";
	cout<<"            ********      *          *          *          *********\n";
	cout<<"            *             *         *          *          *         *\n";
	cout<<"            *             *        *          *          *           *\n";
	cout<<"            *             *       *          *          *             *\n";
	cout<<"            *          *******   *********  *********  *               * \n ";
    cout<<"\n\n\t\t\t~~~~~~~~~~~PIZZA COUSINE~~~~~~~~~~~~\t\t\t\n\n";
    cout<<"COSTUMER INFO.\n";
    cout<<" |---------------------------| \n";
	cout<<" |  Please Enter your Name : | \n";
	cout<<" |---------------------------| ";
    getline(cin,x);
    cout<<" |-------------------------------| \n";
	cout<<" |  Please enter your Phone no.: | \n";
	cout<<" |-------------------------------| ";
    cin>>y;
    cout<<"These are the items available in our shop"<<endl<<endl;
    cout<<" 1.PIZZA\n\t 2.BURGER\n\t\t 3.FLOATERS \n\t\t\t 4.COLD-DRINKS\n\n";
    cout<<"(Please press the respective number according to whatr you want else press 0 to exit)"<<endl;
    pizza pz;
    pz.input();
    pz.types();
    pz.discount();
    pz.file();
    cout<<"your total bill is: "<<(pz.bill-pz.dis)<<" Rs";
}
