#include<stdio.h>
#include<conio.h>

void firstPage();               // method which prints the first page
void menuPage();                // method which prints menu after first page
void pizzaPage(float p[20], char *itm[20], int k);  // pizzapage if pizza is
                                                  // selected from menu

                                                    // page..variables which
                                                 // will
                       // store selected item name and their cost are
                      // passed as arguments..

void sidesPage(float p[20], char *itm[20], int k);  // if sides is selected
                                                    // from menu page
void drinksPage(float p[20], char *itm[20], int k); // if drinks is selected
                                                  // from menu page
void orderListPage(float p[20], char *itm[20], int k);  // method to display
                                                        // the order being
                                                        // placed
                        // will extract price and item names from
                      // arrays whose reference are passed as
                     // arguments..last index for arrays is k
void exitPage();                // method which prints the exiting message

int main()
{
    char i = 0;
   float price[20];            // to store the prices of selected items
    char *item[20];             // to store the name of selected item
    int k = 0;                  // to store the total no of items ordered yet
    // it will also act as a pointer to the arrays price n item
 firstPage();                // first page displayed
    getch();                    // will continue only when some key is pressed
  while (i != '5')
   {                           // i==5 is exiting situation
        menuPage();             // menu displayed
     printf("\n\n\n\n\n\tPlease Enter Your Selection <y/n>:");
        scanf("%c", &i);        // choice received in char i
     // this loop will be repeated until a valid choice comes
      while (i != '1' && i != '2' && i != '3' && i != '4' && i != '5')
       {
          menuPage();
          printf("\n\n\n\n\n\tPlease Enter Valid Selection : ");
          scanf("%c", &i);
   }
    // switch for valid choice received in i
      switch (i)
       {
         // pizza is choosed
     case '1':
       {
            // this method will display pizza choices as well as will
           // receive order and will update arrays price and item
          // accordingly..k will have the index for next updation
           pizzaPage(price, item, k);
          break;
         }
         // sides is choosed
       case '2':
            {
                // similarly like pizzapage,this will display sides choices

                // and will place the order in arrays,will update k
                sidesPage(price, item, k);
               break;
           }
       // drinks is choosed from menu page
    case '3':
          {
               // same as above
              drinksPage(price, item, k);
             break;
            }
        // order list is choosed
      case '4':
           {
             orderListPage(price, item, k);  // order list displayed
                break;
            }
   }                       // switch finished
     // while loop will b continued if i!=5..will again pop up menu page
    }
  exitPage();                 // out of while if i==5..exiting message
  getch();
return 0;
}
void pizzaPage(float p[10], char *itm[20], int k)
{
    int i, j;
char ch;
   // clrscr();
  // display of pizza menu starts
   // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
   printf("\n\n\n\n\n\n\n\n\n\t");
   for (i = 0; i < 58; i++)

        printf("*");
   for (j = 0; j < 2; j++)
{
        printf("\n\t**");
      for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
   }
   printf("\n\t**\t  Menu  Selection  >>  Pizzas\t\t\t**\t");
    for (j = 0; j < 2; j++)
    {
     printf("\n\t**");
        for (i = 0; i < 54; i++)
           printf(" ");
      printf("**");
   }
  printf("\n\t");
    for (i = 0; i < 58; i++)
     printf("*");
   for (j = 0; j < 2; j++)
  {
       printf("\n\t**");
       for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
  for (j = 0; j < 3; j++)
    {
     printf("\n\t**");
     for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
 }
   printf("\n\t**\t 1.Meat Lovers \t\t $ 12.75 \t\t**\t");
 for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
     for (i = 0; i < 54; i++)
           printf(" ");
       printf("**");
   }
  printf("\n\t**\t 2.Vege Delight \t $ 9.50 \t\t**\t");
    for (j = 0; j < 2; j++)
   {
       printf("\n\t**");
       for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
   printf("\n\t**\t 3.Tauranga Special \t $ 12.00 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
          printf(" ");
       printf("**");
    }
   printf("\n\t");
   for (i = 0; i < 58; i++)
       printf("*");
	   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
   // display of pizza menu ends
  // order receiving
    printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
    scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
   scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
  scanf("%c", &ch);           // y if want to order more from pizzapage
  getch();
    // switch for pizza menu
   switch (i)
    {
    case 1:
       {
           // if meat lovers selected,p[k] will contain price
          // itm[k] will contain item name
            p[k++] = 12.75 * j; // j is the no of meat lovers pizza ordered
            itm[k++] = "Meat Lovers";
            break;
        }
 case 2:
        {
            // same as above if vege delight selected
          p[k++] = 9.50 * j;
            itm[k++] = "Vege Delight";
          break;

        }
  case 3:
        {
            // same if tarunga pizza selected
            p[k++] = 12.00 * j;
            itm[k++] = "Tauranga Special";
           break;
        }
    }
   // if want to order more pizza then pop up pizza menu again

    if (ch == 'y')
    {
       pizzaPage(p, itm, k);
    }
    // if not then return to main method
  else if (ch == 'n')
   {
       return;
   }
}
void sidesPage(float p[10], char *itm[20], int k)
{
    char ch;
    int i, j;
   // clrscr();
   // same as above
   // display part starts
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
   printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
   for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t  Menu  Selection  >>  Sides\t\t\t**\t");
    for (j = 0; j < 2; j++)
   {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
          printf(" ");
        printf("**");
    }
   printf("\n\t");
    for (i = 0; i < 58; i++)
      printf("*");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
           printf(" ");
        printf("**");
   }
    printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
    for (j = 0; j < 3; j++)
  {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
   printf("\n\t**\t 1.Fries    \t\t $ 3.00 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t 2.Chicken Wings \t $ 5.50 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
   printf("\n\t**\t 3.Chicken Nuggets \t $ 4.00 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
  printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
   // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    // display of menu part ends
   // order receiving
    printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
    scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
    scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
    scanf("%c", &ch);
 getch();
    // same as in pizzapage
    switch (i)
    {
    case 1:
        {
           p[k++] = 3.00 * j;
          itm[k++] = "Fries";
           break;
        }
   case 2:
       {
            p[k++] = 5.50 * j;
            itm[k++] = "Chicken Wings";
            break;
       }
    case 3:
        {
            p[k++] = 4.00 * j;
            itm[k++] = "Chicken Nuggets";
            break;
        }
    }
    // same as in pizza page
    if (ch == 'y')
    {
        sidesPage(p, itm, k);
    }
    else if (ch == 'n')
    {
        return;
    }
}
void drinksPage(float p[10], char *itm[20], int k)
{
    char ch;
    int i, j;
    // clrscr();
   // refer pizza page for details
    // starts $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
   printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
   {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    } 
    printf("\n\t**\t  Menu  Selection  >>  Drinks\t\t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
       for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
  }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*"); 
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
       printf("**");
    }
   printf("\n\t**\t 1.Water    \t\t $ 1.20 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    } 
    printf("\n\t**\t 2.Coca Cola \t\t $ 5.50 \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
   printf("\n\t**\t 3.L & P   \t\t $ 4.00 \t\t**\t");
   for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
   // same as pizzapage
   printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
   scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
    scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
    scanf("%c", &ch);
    getch();
    switch (i)
    {
    case 1:
        {
            p[k++] = 1.20 * j;
            itm[k++] = "Water";
            break;
        }
   case 2:
        {
            p[k++] = 5.50 * j;
            itm[k++] = "Coca Cola";
            break;
        }
    case 3:
        {
            p[k++] = 4.00 * j;
            itm[k++] = "L & P";
            break;
        }
    }
    if (ch == 'y')
    {
       drinksPage(p, itm, k);
    }
   else if (ch == 'n')
    {
        return;
    }
}
void orderListPage(float p[10], char *itm[20], int k)
{
    int i, j, z;
    float sum = 0;              // will store the total cost
    // clrscr();
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
           printf(" ");
        printf("**");
 }
    printf("\n\t**\t\t  Your  Order  List  \t\t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
   }
    printf("\n\t**\t  Price \t\t  Item Name \t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    // this loop is extracting price and item names from arrays p and itm
    // and displaying them...loop will move k times..p,itm,k are received as
    // arguments
    for (z = 0; z < k; z++)
    {
        printf("\n\t**\t%d. $%0.2f \t %s\t\t**\t", (z + 1), p[z], itm[z]);
        sum = sum + p[z];
        for (j = 0; j < 2; j++)
        {
            printf("\n\t**");
            for (i = 0; i < 54; i++)
                printf(" ");
            printf("**");
       }
    }
   printf("\n\n\n\n\t\tYour Total Amount is : $%0.2f\t", sum);
   return;
}
void exitPage()
{
    int i, j;
    // clrscr();
    // only displaying part
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
   for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
           printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t Exiting Program, Bye Bye  \t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    return;
}
    // this method is only to display menu
void menuPage()
{
    int i, j;
    // clrscr();
    printf("\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Menu  Selection  \t\t\t**\t");
   for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
       printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
   {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  1. Pizzas  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
       printf("**");
    }
    printf("\n\t**\t\t  2. Sides  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  3. Drinks  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  4. Order List  \t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  5. Exit  \t\t\t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    return;
}
    // this method is only to display first page
void firstPage()
{
    int i, j;
    // clrscr();
    printf("\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
   }
    printf("\n\t**\t\t  Vikrant  Pizza  House  \t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 5; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t     Customer  Order  Billing  System  \t\t**");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Press <Enter> to continue   \t\t**");
    for (j = 0; j < 5; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)

            printf(" ");

        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)

        printf("*");
    return;
}


