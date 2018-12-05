
#include <stdio.h>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

char *l = " ------------------------------------------------------------------------------\n";
int order = 1;
const float GST=0.16,discount=0.10;
char choice,membership;
float totalBill=0,finalBill=0,currentBill=0;

int n=1,ans=1;

double total=0,pepay=999999999,ReturnMoney=0;

 class sahil
 {
 	public:
 		char name[30];
 		int sentinel=0;
 		int num1=0, num2=0, num3=0, num4=0, num5=0,num6=0,num7=0,num8=0,num9=0,num10=0,num11=0,num12=0,num13=0,num14=0,num15=0,num16=0,num17=0,num18=0,num19=0,num20=0,num21=0,num22=0,num23=0,num24=0,num25=0,num26=0,num27=0,num28=0,num29=0,num30=0,num31=0,num32=0,num33=0,num34=0,num35=0,num36=0,num37=0,num_customers;
 		double UnitPrice1= 315.00, UnitPrice2= 315.00,UnitPrice3= 410.00, UnitPrice4=410.00, UnitPrice5=410.00,UnitPrice6=410.00,UnitPrice7=475.00,UnitPrice8=475.00,UnitPrice9=475.00,UnitPrice10=475.00,UnitPrice11=475.00,UnitPrice12=540.00,UnitPrice13=410.00,UnitPrice14=475.00,UnitPrice15=475.00,UnitPrice16=475.00,UnitPrice17=510.00,UnitPrice18=510.00,UnitPrice19=510.00,UnitPrice20=510.00,UnitPrice21=575.00,UnitPrice22=575.00,UnitPrice23=575.00,UnitPrice24=40.00,UnitPrice25=35.00,UnitPrice26=45.00,UnitPrice27=40.00,UnitPrice28=50.00,UnitPrice29=45.00,UnitPrice30=90.00,UnitPrice31=20.00,UnitPrice32=20.00,UnitPrice33=190.00,UnitPrice34=195.00,UnitPrice35=200.00,UnitPrice36=285.00,UnitPrice37=240.00;
        double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0,AmountofSale6=0,AmountofSale7=0,AmountofSale8=0,AmountofSale9=0,AmountofSale10=0,AmountofSale11=0,AmountofSale12=0,AmountofSale13=0,AmountofSale14=0,AmountofSale15=0,AmountofSale16=0,AmountofSale17=0,AmountofSale18=0,AmountofSale19=0,AmountofSale20=0,AmountofSale21=0,AmountofSale22=0,AmountofSale23=0,AmountofSale24=0,AmountofSale25=0,AmountofSale26=0,AmountofSale27=0,AmountofSale28=0,AmountofSale29=0,AmountofSale30=0,AmountofSale31=0,AmountofSale32=0,AmountofSale33=0,AmountofSale34=0,AmountofSale35=0,AmountofSale36=0,AmountofSale37=0;

 		homepage()
 		{
while (ans != 0)
 {
 {
 sentinel++;
 cout<<"\t\t##########++++++++++++++++++*****==============================*****++++++++++++++++++##########\n    ";
 cout<<"\t\t \t\t\t\t LOVELY PROFFESSIONAL UNIVERSITY\n";
 cout<<"\t################++++++++++++++++++++*****==============================*****++++++++++++++++++++################\n";
 cout<<"\t\t##########++++++++++++++++++*****==============================*****++++++++++++++++++##########\n ";
 
 cout<<"\t\t   _______                                                   ___________                        \n";  
 cout<<"\t\t  |        \     ___                                         |     |     |                  /|     \n";
 cout<<"\t\t  |         \   |   |                                        |     |     |                 / |    \n";
 cout<<"\t\t  |          | |___|  ________    ________     ________     |     |     |   _________    /  |__            \n";
 cout<<"\t\t  |   |     /  |   | |___     /  |___     /  |______   \     |           |  |    |    |  |      |    \n";
 cout<<"\t\t  |   |____/   |   |     /   /       /   /       /  |  |    |           |  |    |    |  |    __|     \n";
 cout<<"\t\t  |   |        |   |    /   /       /   /       /   |  |    |     |     |  |    |    |  |   |        \n";
 cout<<"\t\t  |   |        |   |   /   /___    /   /___     \       |    |     |     |  |         |  |   |      \n";
 cout<<"\t\t  |___|        |___|  /________|  /________|     \______|    |_____|_____|    \_______/   |___|             \n";
 cout<<"\t\t                                                                                                \n";
 cout<<"\t\t##########++++++++++++++++++*****==============================*****++++++++++++++++++##########\n    ";
  cout<<"\t\t \t\t\t\t\t\t\t  \t\t By :- SAHIL KHAN\n";
 cout<<"\t################++++++++++++++++++++*****==============================*****++++++++++++++++++++################\n";
 cout<<"\t\t##########++++++++++++++++++*****==============================*****++++++++++++++++++##########\n ";
 
 cout<<"\n\tEnter your name : ";
 
 gets(name);
  do
  {
   system("cls");
   cout<<"\n CASHIER : ";
   
   puts(name);
   cout<<endl<<"Do you have membership in our restaurant (y/n): \n";
	cin>>membership;
	if(membership =='y')
	{
		cout<<"\nCongratulations! You got a discount.\n \n";
	}
	else
	{
		cout<<"\nSorry! You are not eligible for discount.\n";
	}
   cout<<name<<"!Do you want to proceed for menu? ";
   cout<<" \n Press [Y] for Yes, and [N] for No.\n\n\tEnter Choice : ";
   cin >> choice;
  } while ((choice !='Y')&&(choice !='N')&&(choice !='y')&&(choice !='n'));
  system("cls");
    switch (choice)
   case 1=='Y'|'y':
   cout<<"\t\t\t    _____\n";
   cout<<"\t\t\t   /     \\   ____   ____    __ __\n";
   cout<<"\t\t\t  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
   cout<<"\t\t\t /    Y    \\  ___/|   |   \\|  |  |\n";
   cout<<"\t\t\t \\____|____/\\____>____|____|_____|\n\n";
  cout<<" \t && Please select the item that you would like to purchase. && \n\n";

  cout<<"     \t\t       #====******  VEG PIZZA  ******====#\n\n";
  cout<<" \t\t  [01] Margherita               -      Rs 315.00\n";
  cout<<" \t\t  [02] Cheese & Tomato          -      Rs 315.00\n";
  cout<<" \t\t  [03] Double Cheese Margherita -      Rs 410.00\n";
  cout<<" \t\t  [04] Country Special          -      Rs 410.00\n";
  cout<<" \t\t  [05] Farmhouse                -      Rs 410.00\n";
  cout<<" \t\t  [06] Fresh Veggie             -      Rs 410.00\n";
  cout<<" \t\t  [07] Peppy Paneeer            -      Rs 475.00\n";
  cout<<" \t\t  [08] Mexican Green Wave       -      Rs 475.00\n";
  cout<<" \t\t  [09] Deluxe Veggie            -      Rs 475.00\n";
  cout<<" \t\t  [10] Gourmet                  -      Rs 475.00\n";
  cout<<" \t\t  [11] 5 Pepper (New)           -      Rs 475.00\n";
  cout<<" \t\t  [12] Veg Extravaganza         -      Rs 540.00\n\n";
   
  cout<<"          \t\t#====******  Non-Veg Pizza  *****====#\n\n";
  cout<<"\t\t  [13] Cheese & Bbq Chicken     -      Rs 410.00\n";
  cout<<"\t\t  [14] Bbq Chicken              -      Rs 475.00\n";
  cout<<"\t\t  [15] Spicy Chicken            -      Rs 475.00\n";
  cout<<"\t\t  [16] Chicken Fiesta           -      Rs 475.00\n";
  cout<<"\t\t  [17] Chicken Mexicana         -      Rs 510.00\n";
  cout<<"\t\t  [18] Keema Do Pyaaza          -      Rs 510.00\n";
  cout<<"\t\t  [19] Chicken Golden Delight   -      Rs 510.00\n";
  cout<<"\t\t  [20] Zesty Chicken (New)      -      Rs 510.00\n";
  cout<<"\t\t  [21] Meatzaa                  -      Rs 575.00\n";
  cout<<"\t\t  [22] Non Veg Extravaganza     -      Rs 575.00\n";
  cout<<"\t\t  [23] Cheese & Pepperoni       -      Rs 575.00\n\n";
  cout<<" \t\t           $  Drinks & Shakes Menu  $ \n\n";
  
  cout<<"\t\t       #======******* Drinks *******======#   \n\n";
  cout<<"\t\t  [24] Pina Colada              -      Rs 40.00\n";
  cout<<"\t\t  [25] Carribbean Shrub         -      Rs 35.00\n";
  cout<<"\t\t  [26] Sparkling Mojito         -      Rs 45.00\n";
  cout<<"\t\t  [27] Punto Tomato             -      Rs 40.00\n";
  cout<<"\t\t  [28] Watermelon Tequila       -      Rs 50.00\n";
  cout<<"\t\t  [29] Mangorita                -      Rs 45.00\n";
  cout<<"\t\t  [30] Virgin Mary              -      Rs 90.00\n";
  cout<<"\t\t  [31] Cococola (All Flavour)   -      Rs 20.00\n";
  cout<<"\t\t  [32] Pepsi (All flavour)      -      Rs 20.00\n\n";
  cout<<"\t\t     #======******* Shakes *******======#   \n\n";
  cout<<"\t\t  [33] Gens And Strawberry      -      Rs 190.00\n";
  cout<<"\t\t  [34] Banana And peanut Butter -      Rs 195.00\n";
  cout<<"\t\t  [35] Chocolate And Coconut    -      Rs 200.00\n";
  cout<<"\t\t  [36] Chocolate And Oreo       -      Rs 285.00\n";
  cout<<"\t\t  [37] Chocolate And Browine    -      Rs 240.00\n";
 }
  while (n != 0)
 {
   do
   {
    cout<<" \n From the list of food, what would you like : ";
    cin>>order;
   } while ((order > 37)&&(order < 1));
   switch(order)
   {                          
    case 1:   
                 cout<<" How many Margherita Pizza would you like to order : ";
                 cin>>num1;
                 AmountofSale1 = UnitPrice1 * num1;
                 break;
    case 2:
                 cout<<" How many Cheese & Tomato Pizza would you like to order : ";
                 cin>>num2;
                 AmountofSale2= UnitPrice2 * num2;
                 break;              
    case 3:
                 cout<<" How many Double Cheese Margherita Pizza would you like to order : ";
                 cin>>num3;              
                 AmountofSale3= UnitPrice3 * num3;
                 break;
    case 4:
                 cout<<" How many Country Special Pizza would you like to order : ";
                 cin>>num4;
                 AmountofSale4= UnitPrice4 * num4;
                 break;
    case 5:
                 cout<<" How many Farmhouse Pizza would you like to order : ";
                 cin>>num5;              
                 AmountofSale5= UnitPrice5 * num5;
                 break; 
	case 6:
                 cout<<" How many Fresh Veggie Pizza would you like to order : ";
                 cin>>num6;              
                 AmountofSale6= UnitPrice6 * num6;
                 break;   
	case 7:
                 cout<<" How many Peppy Paneer Pizza would you like to order : ";
                 cin>>num7;              
                 AmountofSale7= UnitPrice7 * num7;
                 break;   
	case 8:
                 cout<<" How many Mexican Green Wave Pizza would you like to order : ";
                 cin>>num8;              
                 AmountofSale8= UnitPrice8 * num8;
                 break;   
	case 9:
                 cout<<" How many Deluxe Veggie Pizza would you like to order : ";
                 cin>>num9;              
                 AmountofSale9= UnitPrice9 * num9;
                 break;   
	case 10:
                 cout<<" How many Gourmet Pizza would you like to order : ";
                 cin>>num10;              
                 AmountofSale10= UnitPrice10 * num10;
                 break;   
	case 11:
                 cout<<" How many 5 Peeper Pizza would you like to order : ";
                 cin>>num11;              
                 AmountofSale11= UnitPrice11 * num11;
                 break;   
	case 12:
                 cout<<" How many Veg Extravaganza Pizza would you like to order : ";
                 cin>>num12;              
                 AmountofSale12= UnitPrice12 * num12;
                 break;   
	case 13:
                 cout<<" How many Cheese & Bbq Chicken Pizza would you like to order : ";
                 cin>>num13;              
                 AmountofSale13= UnitPrice13 * num13;
                 break;   
	case 14:
                 cout<<" How many Bbq Chicken Pizza would you like to order : ";
                 cin>>num14;              
                 AmountofSale14= UnitPrice14 * num14;
                 break;   
	case 15:
                 cout<<" How many Spicy Chicken Pizza would you like to order : ";
                 cin>>num15;              
                 AmountofSale15= UnitPrice15 * num15;
                 break;   
	case 16:
                 cout<<" How many Chicken Fiesta Pizza would you like to order : ";
                 cin>>num16;              
                 AmountofSale16= UnitPrice16 * num16;
                 break;   
    case 17:
                 cout<<" How many Chicken Mexicana Pizza would you like to order : ";
                 cin>>num17;              
                 AmountofSale17= UnitPrice17 * num17;
                 break;   
    case 18:
                 cout<<" How many Keema Do Pyaaza Pizza would you like to order : ";
                 cin>>num18;              
                 AmountofSale18= UnitPrice18 * num18;
                 break;   
	case 19:
                 cout<<" How many Chicken Golden Delight Pizza would you like to order : ";
                 cin>>num19;              
                 AmountofSale19= UnitPrice19 * num19;
                 break;   
	case 20:
                 cout<<" How many Zesty Chicken Pizza would you like to order : ";
                 cin>>num20;              
                 AmountofSale20= UnitPrice20 * num20;
                 break;   
	case 21:
                 cout<<" How many Meatzaa Pizza would you like to order : ";
                 cin>>num21;              
                 AmountofSale21= UnitPrice21 * num21;
                 break;   
	case 22:
                 cout<<" How many Non Veg Extravaganza Pizza would you like to order : ";
                 cin>>num22;              
                 AmountofSale22= UnitPrice22 * num22;
                 break;   
	case 23:
                 cout<<" How many Cheese & Pepperoni Pizza would you like to order : ";
                 cin>>num23;              
                 AmountofSale23= UnitPrice23 * num23;
                 break;   
	case 24:
                 cout<<" How many Pina Colada Drink would you like to order : ";
                 cin>>num24;              
                 AmountofSale24= UnitPrice24 * num24;
                 break;   
	case 25:
                 cout<<" How many Carribbean Shrub Drink would you like to order : ";
                 cin>>num25;              
                 AmountofSale25= UnitPrice25 * num25;
                 break;   
	case 26:
                 cout<<" How many Sparkling Mojito Drink would you like to order : ";
                 cin>>num26;              
                 AmountofSale26= UnitPrice26 * num26;
                 break;   
	case 27:
                 cout<<" How many Punto Tomato Drink would you like to order : ";
                 cin>>num27;              
                 AmountofSale27= UnitPrice27 * num27;
                 break;   
	case 28:
                 cout<<" How many Watermelon Tequila Drink would you like to order : ";
                 cin>>num28;              
                 AmountofSale28= UnitPrice28 * num28;
                 break;   
	case 29:
                 cout<<" How many Mangorita Drink would you like to order : ";
                 cin>>num29;              
                 AmountofSale29= UnitPrice29 * num29;
                 break;   
	case 30:
                 cout<<" How many Virgin Mary Drink would you like to order : ";
                 cin>>num30;              
                 AmountofSale30= UnitPrice30 * num30;
                 break;   
	case 31:
                 cout<<" How many Cococola Soft Drink would you like to order : ";
                 cin>>num31;              
                 AmountofSale31= UnitPrice31 * num31;
                 break;   
	case 32:
                 cout<<" How many Pepsi Soft Drink would you like to order : ";
                 cin>>num32;              
                 AmountofSale32= UnitPrice32 * num32;
                 break;  
	case 33:
                 cout<<" How many Gens & Strawberry Shake would you like to order : ";
                 cin>>num33;              
                 AmountofSale33= UnitPrice33 * num33;
                 break;   
	case 34:
                 cout<<" How many Banana & Peanut Butter Shake would you like to order : ";
                 cin>>num34;              
                 AmountofSale34= UnitPrice34 * num34;
                 break;   
	case 35:
                 cout<<" How many Chocolate & Coconut Shake would you like to order : ";
                 cin>>num35;              
                 AmountofSale35= UnitPrice35 * num35;
                 break;   
	case 36:
                 cout<<" How many Chocolate & Oreo would you like to order : ";
                 cin>>num36;              
                 AmountofSale36= UnitPrice36 * num36;
                 break;   
	case 37:
                 cout<<" How many Chocolate & Browine would you like to order : ";
                 cin>>num37;              
                 AmountofSale37= UnitPrice37 * num37;
                 break;   
				    
                default: cout<<" Please choose a valid item from our list\n";
   }
  cout<<fixed;
  cout.precision(2);
  cout<<" You have ordered:\n\n";
  cout<<l;
  cout<<" ITEM\t\t\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n";
  cout<<l;
  cout<<" Margherita   :\t\t\t"<<num1<<"\t\tRs   "<<UnitPrice1<<"\tRs "<<AmountofSale1<<"\n";
  cout<<" Che.&Toma.   :\t\t\t"<<num2<<"\t\tRs   "<<UnitPrice2<<"\tRs "<<AmountofSale2<<"\n";
  cout<<" Do.Che.Mar.  :\t\t\t"<<num3<<"\t\tRs   "<<UnitPrice3<<"\tRs "<<AmountofSale3<<"\n";
  cout<<" Count.Spe.   :\t\t\t"<<num4<<"\t\tRs   "<<UnitPrice4<<"\tRs "<<AmountofSale4<<"\n";
  cout<<" Farmhouse    :\t\t\t"<<num5<<"\t\tRs   "<<UnitPrice5<<"\tRs "<<AmountofSale5<<"\n";
  cout<<" Fre.Veggie   :\t\t\t"<<num6<<"\t\tRs   "<<UnitPrice6<<"\tRs "<<AmountofSale6<<"\n";
  cout<<" Pep.Paneer   :\t\t\t"<<num7<<"\t\tRs   "<<UnitPrice7<<"\tRs "<<AmountofSale7<<"\n";
  cout<<" Mex.Gre.Wa.  :\t\t\t"<<num8<<"\t\tRs   "<<UnitPrice8<<"\tRs "<<AmountofSale8<<"\n";
  cout<<" Del.Veggie   :\t\t\t"<<num9<<"\t\tRs   "<<UnitPrice9<<"\tRs "<<AmountofSale9<<"\n";
  cout<<" Gourmet      :\t\t\t"<<num10<<"\t\tRs   "<<UnitPrice10<<"\tRs "<<AmountofSale10<<"\n";
  cout<<" 5 Pepper     :\t\t\t"<<num11<<"\t\tRs   "<<UnitPrice11<<"\tRs "<<AmountofSale11<<"\n";
  cout<<" Veg.Extrav.  :\t\t\t"<<num12<<"\t\tRs   "<<UnitPrice12<<"\tRs "<<AmountofSale12<<"\n";
  cout<<" Che.Bbq.Chi. :\t\t\t"<<num13<<"\t\tRs   "<<UnitPrice13<<"\tRs "<<AmountofSale13<<"\n";
  cout<<" Bbq Chicken  :\t\t\t"<<num14<<"\t\tRs   "<<UnitPrice14<<"\tRs "<<AmountofSale14<<"\n";
  cout<<" Spicy Chi.   :\t\t\t"<<num15<<"\t\tRs   "<<UnitPrice15<<"\tRs "<<AmountofSale15<<"\n";
  cout<<" Chi.Fiesta   :\t\t\t"<<num16<<"\t\tRs   "<<UnitPrice16<<"\tRs "<<AmountofSale16<<"\n";
  cout<<" Chi.Mexican  :\t\t\t"<<num17<<"\t\tRs   "<<UnitPrice17<<"\tRs "<<AmountofSale17<<"\n";
  cout<<" KeemaDoPayaza:\t\t\t"<<num18<<"\t\tRs   "<<UnitPrice18<<"\tRs "<<AmountofSale18<<"\n";
  cout<<" Chi.Gol.Deli.:\t\t\t"<<num19<<"\t\tRs   "<<UnitPrice19<<"\tRs "<<AmountofSale19<<"\n";
  cout<<" Zesty Chicken:\t\t\t"<<num20<<"\t\tRs   "<<UnitPrice20<<"\tRs "<<AmountofSale20<<"\n";
  cout<<" Meatzaa      :\t\t\t"<<num21<<"\t\tRs   "<<UnitPrice21<<"\tRs "<<AmountofSale21<<"\n";
  cout<<" Non.Veg.Extr.:\t\t\t"<<num22<<"\t\tRs   "<<UnitPrice22<<"\tRs "<<AmountofSale22<<"\n";
  cout<<" Che.&Peperoni:\t\t\t"<<num23<<"\t\tRs   "<<UnitPrice23<<"\tRs "<<AmountofSale23<<"\n";
  cout<<" Pina Colada  :\t\t\t"<<num24<<"\t\tRs   "<<UnitPrice24<<"\tRs "<<AmountofSale24<<"\n";
  cout<<" Carrib. Shrub:\t\t\t"<<num25<<"\t\tRs   "<<UnitPrice25<<"\tRs "<<AmountofSale25<<"\n";
  cout<<" Spark.Mojito :\t\t\t"<<num26<<"\t\tRs   "<<UnitPrice26<<"\tRs "<<AmountofSale26<<"\n";
  cout<<" Punto Tomato :\t\t\t"<<num27<<"\t\tRs   "<<UnitPrice27<<"\tRs "<<AmountofSale27<<"\n";
  cout<<" Water.Tequila:\t\t\t"<<num28<<"\t\tRs   "<<UnitPrice28<<"\tRs "<<AmountofSale28<<"\n";
  cout<<" Mangorita    :\t\t\t"<<num29<<"\t\tRs   "<<UnitPrice29<<"\tRs "<<AmountofSale29<<"\n";
  cout<<" Virgin Mary  :\t\t\t"<<num30<<"\t\tRs   "<<UnitPrice30<<"\tRs "<<AmountofSale30<<"\n";
  cout<<" Cococola     :\t\t\t"<<num31<<"\t\tRs   "<<UnitPrice31<<"\tRs "<<AmountofSale31<<"\n";
  cout<<" Pepsi        :\t\t\t"<<num32<<"\t\tRs   "<<UnitPrice32<<"\tRs "<<AmountofSale32<<"\n";
  cout<<" Gens & Straw.:\t\t\t"<<num33<<"\t\tRs   "<<UnitPrice33<<"\tRs "<<AmountofSale33<<"\n";
  cout<<" Ban.& Pea.Bu.:\t\t\t"<<num34<<"\t\tRs   "<<UnitPrice34<<"\tRs "<<AmountofSale34<<"\n";
  cout<<" Choc.&Coconut:\t\t\t"<<num35<<"\t\tRs   "<<UnitPrice35<<"\tRs "<<AmountofSale35<<"\n";
  cout<<" Choc.& Oreo  :\t\t\t"<<num36<<"\t\tRs   "<<UnitPrice36<<"\tRs "<<AmountofSale36<<"\n";
  cout<<" Choc.&Browine:\t\t\t"<<num37<<"\t\tRs   "<<UnitPrice37<<"\tRs "<<AmountofSale37<<"\n";
  finalBill=0;
  totalBill+=AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+AmountofSale9+AmountofSale10+AmountofSale11+AmountofSale12+AmountofSale13+AmountofSale14+AmountofSale15+AmountofSale16+AmountofSale17+AmountofSale18+AmountofSale19+AmountofSale20+AmountofSale21+AmountofSale22+AmountofSale23+AmountofSale24+AmountofSale25+AmountofSale26+AmountofSale27+AmountofSale28+AmountofSale29+AmountofSale30+AmountofSale31+AmountofSale32+AmountofSale33+AmountofSale34+AmountofSale35+AmountofSale36+AmountofSale37;
  {
			if(membership =='y')
			{
				finalBill+=totalBill+(totalBill*GST)-(totalBill*discount);
			}
			else
			{
			    finalBill+=totalBill+(totalBill*GST);
			}
	
					
  }
  cout<<l;
  cout<<"\t\t\t\t\t\tThat would be:  Rs "<<finalBill<<"\n";
  cout<<l;
  do
  {
   cout<<" Order Again [0] no [1] yes : ";
   cin >> n;
  } while ((n != 0)&&(n != 1));
   
    }
}
////////////////////////

void display()
{
 do
 {
  system("cls");
  if (pepay < finalBill)
  {
   cout<<"\t\t--- Insufficient Money... PAY OR DIE ??? ---\n";
  }
   cout<<"\n\tCashier : "<<name<<"\t\t\t\t\tTransaction # "<<sentinel<<"\n";
   cout<<l;
   cout<<" You have ordered:\n\n";
   cout<<" ITEM\t\t\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n";
  
  if (num1 != 0)
  {
  cout<<" Margherita  :\t\t\t"<<num1<<"\t\tRs   "<<UnitPrice1<<"\tRs "<<AmountofSale1<<"\n";
  }
  if (num2 != 0)
  {
  cout<<" Che.&Toma.  :\t\t\t"<<num2<<"\t\tRs   "<<UnitPrice2<<"\tRs "<<AmountofSale2<<"\n";
  }
  if (num3 != 0)
  {
  cout<<" Do.Che.Mar. :\t\t\t"<<num3<<"\t\tRs   "<<UnitPrice3<<"\tRs "<<AmountofSale3<<"\n";
  }
  if (num4 != 0)
  {
  cout<<" Count.Spe.  :\t\t\t"<<num4<<"\t\tRs   "<<UnitPrice4<<"\tRs "<<AmountofSale4<<"\n";
  }
  if (num5 != 0)
  {
  cout<<" Farmhouse   :\t\t\t"<<num5<<"\t\tRs   "<<UnitPrice5<<"\tRs "<<AmountofSale5<<"\n";
  }
  if (num6 != 0)
  {
  cout<<" Fre.Veggie  :\t\t\t"<<num6<<"\t\tRs   "<<UnitPrice6<<"\tRs "<<AmountofSale6<<"\n";
  }
  if (num7 != 0)
  {
  cout<<" Pep.Paneer  :\t\t\t"<<num7<<"\t\tRs   "<<UnitPrice7<<"\tRs "<<AmountofSale7<<"\n";
  }
  if (num8 != 0)
  {
  cout<<" Mex.Gre.Wa. :\t\t\t"<<num8<<"\t\tRs   "<<UnitPrice8<<"\tRs "<<AmountofSale8<<"\n";
  }
  if (num9 != 0)
  {
  cout<<" Del.Veggie  :\t\t\t"<<num9<<"\t\tRs   "<<UnitPrice9<<"\tRs "<<AmountofSale9<<"\n";
  }
  if (num10 != 0)
  {
  cout<<" Gourmet     :\t\t\t"<<num10<<"\t\tRs   "<<UnitPrice10<<"\tRs "<<AmountofSale10<<"\n";
  }
  if (num11 != 0)
  {
  cout<<" 5 Pepper    :\t\t\t"<<num11<<"\t\tRs   "<<UnitPrice11<<"\tRs "<<AmountofSale11<<"\n";
  }
  if (num12 != 0)
  {
  cout<<" Veg.Extrav. :\t\t\t"<<num12<<"\t\tRs   "<<UnitPrice12<<"\tRs "<<AmountofSale12<<"\n";
  }
  if (num13 != 0)
  {
  cout<<" Che.Bbq.Chi.:\t\t\t"<<num13<<"\t\tRs   "<<UnitPrice13<<"\tRs "<<AmountofSale13<<"\n";
  }
  if (num14 != 0)
  {
  cout<<" Bbq Chicken :\t\t\t"<<num14<<"\t\tRs   "<<UnitPrice14<<"\tRs "<<AmountofSale14<<"\n";
  }
  if (num15 != 0)
  {
  cout<<" Spicy Chi.  :\t\t\t"<<num15<<"\t\tRs   "<<UnitPrice15<<"\tRs "<<AmountofSale15<<"\n";
  }
  if (num16 != 0)
  {
  cout<<" Chi.Fiesta  :\t\t\t"<<num16<<"\t\tRs   "<<UnitPrice16<<"\tRs "<<AmountofSale16<<"\n";
  }
  if (num17 != 0)
  {
  cout<<" Chi.Mexican :\t\t\t"<<num17<<"\t\tRs   "<<UnitPrice17<<"\tRs "<<AmountofSale17<<"\n";
  }
  if (num18 != 0)
  {
  cout<<" KeemaDoPayaza:\t\t\t"<<num18<<"\t\tRs   "<<UnitPrice18<<"\tRs "<<AmountofSale18<<"\n";
  }
  if (num19 != 0)
  {
  cout<<" Chi.Gol.Deli.:\t\t\t"<<num19<<"\t\tRs   "<<UnitPrice19<<"\tRs "<<AmountofSale19<<"\n";
  }
  if (num20 != 0)
  {
  cout<<" Zesty Chicken:\t\t\t"<<num20<<"\t\tRs   "<<UnitPrice20<<"\tRs "<<AmountofSale20<<"\n";
  }
  if (num21 != 0)
  {
  cout<<" Meatzaa      :\t\t\t"<<num21<<"\t\tRs   "<<UnitPrice21<<"\tRs "<<AmountofSale21<<"\n";
  }
  if (num22 != 0)
  {
  cout<<" Non.Veg.Extr.:\t\t\t"<<num22<<"\t\tRs   "<<UnitPrice22<<"\tRs "<<AmountofSale22<<"\n";
  }
  if (num23 != 0)
  {
  cout<<" Che.&Peperoni:\t\t\t"<<num23<<"\t\tRs   "<<UnitPrice23<<"\tRs "<<AmountofSale23<<"\n";
  }
  if (num24 != 0)
  {
  cout<<" Pina Colada  :\t\t\t"<<num24<<"\t\tRs   "<<UnitPrice24<<"\tRs "<<AmountofSale24<<"\n";
  }
  if (num25 != 0)
  {
  cout<<" Carrib. Shrub:\t\t\t"<<num25<<"\t\tRs   "<<UnitPrice25<<"\tRs "<<AmountofSale25<<"\n";
  }
  if (num26 != 0)
  {
  cout<<" Spark.Mojito :\t\t\t"<<num26<<"\t\tRs   "<<UnitPrice26<<"\tRs "<<AmountofSale26<<"\n";
  }
  if (num27 != 0)
  {
  cout<<" Punto Tomato :\t\t\t"<<num27<<"\t\tRs   "<<UnitPrice27<<"\tRs "<<AmountofSale27<<"\n";
  }
  if (num28 != 0)
  {
  cout<<" Water.Tequila:\t\t\t"<<num28<<"\t\tRs   "<<UnitPrice28<<"\tRs "<<AmountofSale28<<"\n";
  }
  if (num29 != 0)
  {
  cout<<" Mangorita    :\t\t\t"<<num29<<"\t\tRs   "<<UnitPrice29<<"\tRs "<<AmountofSale29<<"\n";
  }
  if (num30 != 0)
  {
  cout<<" Virgin Mary  :\t\t\t"<<num30<<"\t\tRs   "<<UnitPrice30<<"\tRs "<<AmountofSale30<<"\n";
  }
  if (num31 != 0)
  {
  cout<<" Cococola     :\t\t\t"<<num31<<"\t\tRs   "<<UnitPrice31<<"\tRs "<<AmountofSale31<<"\n";
  }
  if (num32 != 0)
  {
  cout<<" Pepsi        :\t\t\t"<<num32<<"\t\tRs   "<<UnitPrice32<<"\tRs "<<AmountofSale32<<"\n";
  }
  if (num33 != 0)
  {
  cout<<" Gens & Straw.:\t\t\t"<<num33<<"\t\tRs   "<<UnitPrice33<<"\tRs "<<AmountofSale33<<"\n";
  }
  if (num34 != 0)
  {
  cout<<" Ban.& Pea.Bu.:\t\t\t"<<num34<<"\t\tRs   "<<UnitPrice34<<"\tRs "<<AmountofSale34<<"\n";
  }
  if (num35 != 0)
  {
  cout<<" Choc.&Coconut:\t\t\t"<<num35<<"\t\tRs   "<<UnitPrice35<<"\tRs "<<AmountofSale35<<"\n";
  }
  if (num36 != 0)
  {
  cout<<" Choc.& Oreo  :\t\t\t"<<num36<<"\t\tRs   "<<UnitPrice36<<"\tRs "<<AmountofSale36<<"\n";
  }
   if (num37 != 0)
  {
  cout<<" Choc.&Browine:\t\t\t"<<num37<<"\t\tRs   "<<UnitPrice37<<"\tRs "<<AmountofSale37<<"\n";
  }
  cout<<l;
  cout<<"\tTotal : "<<finalBill;
}

void display2()
{
  cout<<"\n\tEnter Received Cash : ";
  cin >> pepay;
 } while (pepay < finalBill);
   ReturnMoney = pepay - finalBill;
 cout<<"\tYour change is : "<<ReturnMoney<<"\n\n\n\n\t\t";
  do
  {
   cout<<" New transaction [0] no [1] yes : ";
   cin >> ans;
  } while ((ans != 0)&&(ans != 1));
 }
 system("cls\n\n\n\t\t");
 system("PAUSE");
}
}
fstream fp;
sahil piz;
///////////////////////
void save_data()
{
	fp.open("contactBook.dat",ios::out|ios::app);
//	piz.create_contact();
	fp.write((char*)&piz,sizeof(piz));
	fp.close();
	cout<<endl<<endl<<"Successful";
	getchar();
}
 
void customer_data()
{
	system("cls");
	 cout<<"\n\t\t================================\n\t\t\tLIST OF Customer\n\t\t================================\n";
	fp.open("book.dat",ios::in);
	while(fp.read((char*)&piz,sizeof(piz)))
	{
		piz.display();
		cout<<endl<<"=================================================\n"<<endl;
	}
	fp.close();
}
 
//////////////////////
int main()
{
	int num;
	int k;
	homepage();
	tx:
	cout
	switch(k)
	{
		case 1:
			piz.menu();
			save_contact();
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
