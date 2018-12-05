
class pizza_hut {
  private :
    int items;
    int option;
    
    
  public :
   void new_order();
   void check();
   void earn_p();
   void earn_b();
   void tearn();
};

//SECOND HEADER FILE

class pizza2 : public pizza_hut{
 public:
 int orders;
  void adress();
  int amount_p;
  int amount_b;
  
  char add[40];
  char name[15];
};

//IMPLEMENTATION FILE:

#include <iostream>
#include <string.h>
#include <pizza.h>
#include "pizza2.h";
pizza2 p2;
using namespace std;
void pizza_hut::new_order(){
 option =0 ;
  cout<<"MENU\n";
             cout << "1. PIZZA\n2. BURGER\n";
       
       cin >> option;
          switch(option){
           case 1:{
            cout << ":: PIZZAS :: \n\n";
            cout << "1. Small\n2. medium\n3. Large\n";
            option =0;
            cin >> option;
            switch(option){
             case 1:{
              cout << "1. Chicken pizza\n2. Beef Pizza\n3. Vegetable Pizza\n";
              option =0;
              cin >> option ;
              switch(option){
               case 1:{
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 2: {
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 3:{
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
        }
        break;
       }
       case 2:{
        cout << "1. Chicken pizza\n2. Onion Pizza\n3. Vegetable Pizza\n";
              option =0;
              cin >> option ;
              switch(option){
               case 1:{
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 2: {
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 3:{
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
        }
        break;
       }
       case 3: {
        cout << "1. Chicken pizza\n2. Beef Pizza\n3. Vegetable Pizza\n";
              option =0;
              cin >> option ;
              switch(option){
               case 1:{
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 2: {
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
         case 3:{
         
                cout << "Where to deliver:\n\n";
                p2.adress();
          break;
         }
        }
        break;
       }
      }
      break;
     }
     case 2:{
      cout << "1. Zinger Burger\n2. Beef burger\n";
      option =0;
      cin >> option ;
      switch(option){
       case 1:{
         cout << "Where to deliver:\n\n";
                p2.adress();
        break;
       }
       case 2:{
         cout << "Where to deliver:\n\n";
                p2.adress();
        break;
       }
       default:{
        system("pause");
        break;
       }
      }
      break;
     }
     
     default: {
      system("cls");
      //goto again;
      break;
     }
    }
                     
}
void pizza_hut::check(){
 cout << " Your Total Orders : "<< p2.orders << endl;
 
}
void pizza_hut::earn_p() {
 p2.amount_p=p2.orders*500;
 cout <<  p2.amount_p << endl;
}
void pizza_hut::earn_b(){
 p2.amount_b=p2.orders*300;
 cout <<  p2.amount_b << endl;
 
}
void pizza_hut::tearn(){
 cout << (p2.orders*500)+(p2.orders*300) << endl;
}
void pizza2::adress(){
 
 cout << "\n\nEnter address: " ;
 cin.ignore();
 cin.getline(add, 40);
 cout << "Enter your name: ";
 cin.getline(name , 15);
 cout << "Item has been added!!";
 p2.orders++;
 
 
}


MAIN FILE:

#include <iostream>
#include "pizza.h"
#include "pizza2.h"
using namespace std;
pizza_hut p1;


int main()
{ 
 int pass ;
 int select;
 cout << endl;
 again:
 cout << "\nEnter the password :  " ;
 cin >> pass;
 if (pass==0000)
 {
  system("cls");
 cout << "\t\t***** Welcome To The Pizza Hut *****  " << endl ;
 g_menu:
 cout << "1. NEW ORDER\n2. CHECK ORDERS\n3. EARNINGS\n4. Exit "  << endl;
 cin >> select;
 switch(select)
 {
  case 1 : {
   
   cout << "\n:: NEW ORDER :: \n\n";
   p1.new_order();
   system("cls");
   goto g_menu;
   break;
  }
  case 2 : {
   cout << ":: CHECK ORDERS :: \n\n";
   p1.check();
   system("pause");
   system("cls");
   goto g_menu;
   break;
  }
  case 3 : {
   cout << ":: EARNINGS ::  \n\n";
   cout << "1. Pizza earnings\n2. Burger earnings\n3. Total earnings\n";
   select = 0;
   cin >> select;
   switch(select){
    case 1:{
     cout << "Total earnings: " ;
      p1.earn_p() ;
      system("pause");
     
     break;
    }
    case 2: {
     cout << "Total earnings: " ;
     p1.earn_b();
     system("pause");
     break;
    }
    case 3: {
     cout << "Total earnings :";
      p1.tearn() ;
     system("pause");
     break;
    }
   }
   system("cls");
   system("pause");
   goto g_menu;
   break;
  }
  case 4 : {
   return 0;
   break;
  }
 }
  
 }
 else
 {
  system("cls");
  cout << "Try again\n\n";
  system("pause");
  system("cls");
  goto again;
 }
 
 return 0;
}
