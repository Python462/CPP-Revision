#include<stdio.h>
#include<conio.h>
#include<math.h>
char *months[] =
    {" ","\nJanuary","\nFebruary","\nMarch","\nApril","\nMay","\nJune","\nJuly","\nAugust","\nSeptember","\nOctober","\nNovember","\nDecember"};
 int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31 ,31 ,30, 31, 30, 31};
 int l=0;
 int leap(int year)
{
	 if ((year % 100 == 0) && (year % 400 != 0))
      l= 0;
   else if (year % 4 == 0)
      l= 1;
   else
      l= 0;
      if(l==1)
      {
        month_days[2] = 29;
      } 
	  else {
        month_days[2] = 28;}
      return l;
}
int fm(int month)
{
   int fmonth, leap=l;
   //leap function 1 for leap & 0 for non-leap
   
   fmonth = 3 + (2 - leap)*((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;
 
   //bring it in range of 0 to 6
   fmonth = fmonth % 7;
   return fmonth;
}
 
//----------------------------------------------
int day_of_week(int month, int year) 
{
   int dayOfWeek;
   int date=1;
   int YY = year % 100;
   int century = year / 100;
   dayOfWeek = 1.25 * YY + fm(month) + date - 2 * (century % 4);
   dayOfWeek = dayOfWeek % 7;
   if(dayOfWeek==0)
   dayOfWeek=7;
   return dayOfWeek;
}
//................................................
int calendar(int month,int first_day)
{
    int i,j;
     printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    for(j = 1; j <= 1 + first_day * 5; j++)
    {
        printf(" ");
    }
 
    for(i = 1; i <= month_days[month]; i++)
    {
        printf("%2d", i);
 
        if((i + first_day)%7 > 0)
            printf("   ");
        else
            printf("\n ");
    }
}
//------------------------------------------
int main() 
{
   int month=1, year,t;
    do
	{
        printf("Enter a year: ");
        scanf("%d", &year);
    }
	 while (year < 1978 || year > 3000);
	  l=leap(year);
   for(month=1;month<=12;month++)
   {
   t=day_of_week(month, year);
   printf("\n%s~~~~~~~\n",months[month]);
     calendar(month,t-1);
    printf("\n---------------------------------\n");
}
   return 0;
}

