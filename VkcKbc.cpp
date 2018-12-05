#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<stdio.h>
//#include<fstream.h>
using namespace std;
//****************************************//
// -*- CLASS FOR ATTRACTIVE LOOK -*- //
//****************************************//
class Display
{
private:
int i,j;
public:
void rect(int,int,int,int);
Display();
void boxes();
void start();
};
void Display::start()
{
//****************************//
//******FRONT PAGE DESIGN******//
//****************************//
//cleardevice();
setbkcolor(BLACK);
setcolor(GREEN);
settextstyle(1,HORIZ_DIR,7);
outtextxy(20,10," THE ");
delay(250);
setcolor(RED);
outtextxy(20,60," ~~~~~");
setcolor(GREEN);
outtextxy(100,80," PILLARS ");
delay(250);
setcolor(RED);
outtextxy(100,130,"~~~~~~~~~~");
setcolor(GREEN);
outtextxy(230,150," PUBLIC "); //
delay(250);
setcolor(RED);
outtextxy(230,200,"~~~~~~~~~~");
setcolor(GREEN); //
outtextxy(340,220," SCHOOL "); //
delay(250);
setcolor(RED);
outtextxy(340,270,"~~~~~~~~~~");
setcolor(RED);//
settextstyle(1,HORIZ_DIR,4); //
outtextxy(150,310," COMPUTER PROJECT");
setcolor(GREEN);
outtextxy(150,340,"~~~~~~~~~~~~~~~~~~~~~~~");
setcolor(BLUE);//
settextstyle(1,HORIZ_DIR,2); //
outtextxy(2,400," UNDER THE GUIDENCE OF :");
setcolor(GREEN);
outtextxy(2,405," _______________________ ");
setcolor(CYAN);
outtextxy(10,430," Mr.AMIT SRIVASTAVA");
setcolor(BLUE);//
// settextstyle(1,HORIZ_DIR,2); //
outtextxy(380,400," SUBMITTED BY :");
setcolor(GREEN);
outtextxy(380,405," ______________ ");
setcolor(CYAN);
outtextxy(402,430,"Pramod & Vikrant");
getch();
for(i=0;i<320;i+=5)
{
delay(20);
line(i,0,i,500);
line(638-i,0,638-i,500);
}
//****************************//
//*****SECOND PAGE DESIGN*****//
//***************************//
cleardevice();
setbkcolor(BLACK);
setcolor(RED);
for(i=0;i<640;i++)
line(i,0,i,500);
for(i=320,j=320;i>=50;i--,j++)
{
setcolor(0);
line(i,0,i,500);line(j,0,j,500);
delay(5);
}
settextstyle(1,HORIZ_DIR,7);
setcolor(RED);
outtextxy(95,0,"^^^^^^^^^^^^");
outtextxy(95,5,"^^^^^^^^^^^^");
outtextxy(95,415,"^^^^^^^^^^^^");
outtextxy(95,420,"^^^^^^^^^^^^");
setcolor(CYAN);
outtextxy(100,30," WELCOME TO ");
j=200;i=7;
outtextxy(j,100," K ");
delay(150);
outtextxy(j,100," KA ");
delay(150);
outtextxy(j,100," KAU ");
delay(150);
outtextxy(j,100," KAUN ");
delay(150);
outtextxy(j,175,"B ");
delay(150);
outtextxy(j,175,"BA ");
delay(150);
outtextxy(j,175,"BAN ");
delay(150);
outtextxy(j,175,"BANE ");
delay(150);
outtextxy(j,175,"BANEG ");
delay(150);
outtextxy(j,175,"BANEGA ");
delay(150);
j=135;
outtextxy(j,250," C");
delay(150);
outtextxy(j,250," CR");
delay(150);
outtextxy(j,250," CRO");
delay(150);
outtextxy(j,250," CROR");
delay(150);
outtextxy(j,250," CRORE");
delay(150);
outtextxy(j,250," CROREP");
delay(150);
outtextxy(j,250," CROREPA");
delay(150);
outtextxy(j,250," CROREPAT");
delay(150);
outtextxy(j,250," CROREPATI");
delay(150);
outtextxy(240,330,"...?... ");
settextstyle(7,HORIZ_DIR,3);
setcolor(YELLOW);
settextstyle(7,HORIZ_DIR,1);
for(i=0;i<450;i+=20)
{
outtextxy(80,i,"$");
outtextxy(550,i,"$");
delay(105);
}
getch();
setcolor(CYAN);
for(i=0;i<320;i+=5)
{
delay(10);
line(i,0,i,500);
line(638-i,0,638-i,500);
}
cleardevice();
setbkcolor(BLUE);
}
void Display::rect(int i,int j,int k,int l)
{
setcolor(WHITE);
line(i,j,k,j);
line(i,j,i,l);
setcolor(DARKGRAY);
line(i,l,k,l); //Draw 3D Rectangle
line(i-1,l-1,k-1,l-1);
line(k,j,k,l);
line(k-1,j-1,k-1,l-1);
}
void Display::Display()
{
setcolor(LIGHTCYAN);
rectangle(1,2,638,474);
rectangle(5,6,634,206);
rectangle(5,210,634,470); //Display Border.
setcolor(YELLOW);
rectangle(3,4,636,208);
rectangle(3,208,636,472);
setcolor(MAGENTA);
line(21,21,618,21);
line(21,21,21,194);
setcolor(MAGENTA);
line(618,21,618,194);
line(21,194,618,194);
}
void Display::boxes()
{ //Big Box
line(120,250,510,250);
line(120,300,510,300);
line(120,250,60,275);
line(120,300,60,275);
line(510,250,570,275);
line(510,300,570,275);
line(6,275,60,275);
line(570,275,633,275);
// A Box
line(120,330,225,330);
line(120,370,225,370);
line(120,330,60,350);
line(120,370,60,350);
line(225,330,285,350);
line(225,370,285,350);
line(6,350,60,350);
line(285,350,335,350);
// B Box
line(120,400,225,400);
line(120,440,225,440);
line(120,400,60,420);
line(120,440,60,420);
line(225,400,285,420);
line(225,440,285,420);
line(6,420,60,420);
line(285,420,335,420);
// C Box
line(395,330,510,330);
line(395,370,510,370);
line(395,330,335,350);
line(395,370,335,350);
line(510,330,570,350);
line(510,370,570,350);
line(570,350,633,350);
// d Box
line(395,400,510,400);
line(395,440,510,440);
line(395,400,335,420);
line(395,440,335,420);
line(510,400,570,420);
line(510,440,570,420);
line(570,420,633,420);
}
/*------------ -*- END OF CLASS DISPLAY -*- ------------------------------*/
//****************************************//
// -*- CLASS TO PUT TEXT -*- //
//****************************************//
class Text:public Display
{
private:
int i,j;
public:
void put_name();
void put_levels();
void put_lifeline();
void refresh();
void End();
};
void Text::put_name()
{ setbkcolor(BLACK);
settextstyle(4,HORIZ_DIR,6);
setcolor(LIGHTGREEN);
outtextxy(46,30,"Kaun Banega");
outtextxy(46,80,"Crorepati...........?");
}
void Text::put_levels()
{
settextstyle(11,HORIZ_DIR,1);
setcolor(GREEN);
outtextxy(500,35,"1,00,00,000");
setcolor(YELLOW);
outtextxy(500,45," 50,00,000");
outtextxy(500,55," 25,00,000");
outtextxy(500,65," 12,00,000");
outtextxy(500,75," 6,50,000");
setcolor(GREEN);
outtextxy(500,85," 3,20,000");
setcolor(YELLOW);
outtextxy(500,95," 1,60,000");
outtextxy(500,105," 80,000");
outtextxy(500,115," 40,000");
outtextxy(500,125," 20,000");
setcolor(GREEN);
outtextxy(500,135," 10,000");
setcolor(YELLOW);
outtextxy(500,145," 5,000");
outtextxy(500,155," 3,000");
outtextxy(500,165," 2,000");
outtextxy(500,175," 1,000");
rectangle(490,30,605,185);
}
void Text::put_lifeline()
{
for(i=80;i<380;i+=120)
rect(i,160,i+100,185);
settextstyle(11,HORIZ_DIR,1);
setcolor(LIGHTRED);
outtextxy(90,168,"1.Restart");
outtextxy(206,168,"2.Life Line");
outtextxy(325,168,"3. QUIT");
}
void Text::refresh()
{
cleardevice();
Display();
boxes();
put_name();
put_levels();
put_lifeline();
}
void Text::End() //
{
for(i=0;i<320;i+=5)
{
delay(20);
line(i,0,i,500);
line(638-i,0,638-i,500);
}
exit(0);
} //
/*------------ -*- END OF CLASS TEXT -*- ------------------------------*/
//***********************************************************//
// -*- CLASS TO PUT QUESTION AND CHECK ANSWER -*- //
//***********************************************************//
class question:public Text
{
int qu_no,aud_vote,exp_ad,i,j,k,f_50,answer,cas;
char quest[100],opt1[50],opt2[50],opt3[50],opt4[50],question[15],line[3],coropt,sn;
public:
question();
void put_ques(int=0);
void check_ans(int);
void show_level();
void options(int);
};
void question::question()
{
i=0;
j=1;
k=0;
qu_no=-1;
aud_vote=1;
f_50=1;
exp_ad=1;
answer=0;
cas=0;
}
void question::put_ques(int p)
{
settextstyle(3,HORIZ_DIR,1);
setcolor(MAGENTA);
outtextxy(120,270," ..!!.. PLEASE WAIT..!!..");
if(p==0)
{
qu_no++;
while(j)
{
randomize();
k=random(39);
question[qu_no]=k;
for(i=0;i<qu_no;i++)
{
if(k==question[i])
{
break;
}
}
if(i==qu_no)
j=0;
else
j=1;
}
j=1;
}
ifstream fin1;
fin1.open("KBC.dat",ios::in);
while(!fin1.eof())
{
fin1.get(sn);
fin1.getline(quest,100);
fin1.getline(opt1,50);
fin1.getline(opt2,50);
fin1.getline(opt3,50);
fin1.getline(opt4,50);
fin1.get(coropt);
fin1.getline(line,3);
cas=sn-48;
if(cas==k)
{
refresh();
show_level();
gotoxy(16,17);
cout<<"Q."<<quest;
gotoxy(16,22);
cout<<"A. "<<opt1;
gotoxy(50,22);
cout<<"B. "<<opt2;
gotoxy(50,25);
cout<<"\n\n"<<"\t\t\t\t\t\t "<<"D. "<<opt4;
gotoxy(16,25);
cout<<"\n\n"<<"\t "<<"C. "<<opt3;
setcolor(CYAN);
boxes();
setcolor(LIGHTCYAN);
rectangle(1,2,638,474);
rectangle(5,6,634,206);
rectangle(5,210,634,470); //Display Border.
setcolor(YELLOW);
rectangle(3,4,636,208);
rectangle(3,208,636,472);
answer=coropt-48;
break;
}
} fin1.close();
}
void question::check_ans(int choice)
{
refresh();
if(choice==answer)
{
outtextxy(190,255,"CONGRATULATION! You have own");
gotoxy(35,18);
switch(qu_no)
{
case 0:
cout<<"Rs.1,000/-";
break;
case 1:
cout<<"Rs.2,000/-";
break;
case 2:
cout<<"Rs.3,000/-";
break;
case 3:
cout<<"Rs.5,000/-";
break;
case 4:
cout<<"Rs.10,000/-";
break;
case 5:
cout<<"Rs.20,000/-";
break;
case 6:
cout<<"Rs.40,000/-";
break;
case 7:
cout<<"Rs.80,000/-";
break;
case 8:
cout<<"Rs.1,60,000/-";
break;
case 9:
cout<<"Rs.3,20,000/-";
break;
case 10:
cout<<"Rs.6,40,000/-";
break;
case 11:
cout<<"Rs.12,50,000/-";
break;
case 12:
cout<<"Rs.25,00,000/-";
break;
case 13:
cout<<"Rs.50,00,000/-";
break;
case 14:
cout<<"Rs.1,00,00,000/-";
getch();
cleardevice();
setbkcolor(BLACK);
settextstyle(1,HORIZ_DIR,7);
setcolor(GREEN);
outtextxy(150,150,"YOU WON");
setcolor(RED);
outtextxy(150,200,"~~~~~~~~~~");
delay(1000);
End();
cleardevice();
break;
}
}
else
{
outtextxy(145,258,"SORRY! Your Answer is wrong,You have won only");
gotoxy(35,18);
if(qu_no<5)
cout<<"Rs."<<"0/-";
else if(qu_no<10)
cout<<"Rs."<<"10,000/-";
else
cout<<"Rs."<<"3,20,000/-";
getch();
delay(20);
cleardevice();
setbkcolor(BLACK);
settextstyle(1,HORIZ_DIR,7);
setcolor(GREEN);
outtextxy(150,150,"GAME OVER");
setcolor(RED);
outtextxy(150,200,"~~~~~~~~~~~~~");
delay(1000);
End();
}
getch();
refresh();
}
void question::show_level()
{
for(i=0;i<qu_no;i++)
{
setcolor(LIGHTGREEN);
outtextxy(592,175-(i*10),"*");
}
setcolor(LIGHTRED);
outtextxy(592,175-(i*10),"*");
}
void question::options(int choice)
{
char ch;
int p,q,r,s,t,u;
refresh();
switch(choice)
{
case 1:
qu_no=-1;
j=1;
k=0;
i=0;
break;
case 2:
outtextxy(140,270,"Your Life Line. ");
if(f_50==1)
outtextxy(120,345,"1] 50-50.");
// outtextxy(120,415,"2] Flip."); //
if(aud_vote==1)
outtextxy(395,345,"2] Aud_Vote.");
if(exp_ad==1)
outtextxy(120,415,"3] Expert Advice");
ch=getch();
switch(ch)
{
case '1':
p=answer-1;
if(p<1)p=4;
q=answer+1;
if(q>4)q=1;
refresh();
outtextxy(145,258,"Followig option are not answer");
gotoxy(35,18);
cout<<(char)(p+64)<<" & "<<(char)(q+64);
getch();
f_50=0;
break;
case '2':
refresh();
outtextxy(120,270,"Audiance votes are.....");
if(answer==1)
{
outtextxy(120,345,"A] 55%.");
outtextxy(120,415,"B] 19%.");
outtextxy(395,345,"C] 20%.");
outtextxy(395,415,"D] 6%.");
}
if(answer==2)
{
outtextxy(120,345,"A] 20%.");
outtextxy(120,415,"B] 60%.");
outtextxy(395,345,"C] 4%.");
outtextxy(395,415,"D] 6%.");
}
if(answer==3)
{
outtextxy(120,345,"A] 30%.");
outtextxy(120,415,"B] 11%.");
outtextxy(395,345,"C] 50%.");
outtextxy(395,415,"D] 9%.");
}
if(answer==4)
{
outtextxy(120,345,"A] 15%.");
outtextxy(120,415,"B] 10%.");
outtextxy(395,345,"C] 35%.");
outtextxy(395,415,"D] 40%.");
}
getch();
aud_vote=0;
break;
case'3':
refresh();
outtextxy(120,270,"Which Expert would you like to prefer:");
outtextxy(109,345,"A] Dr.Manmohan Singh");
outtextxy(109,415,"B] Dr.APJ Abdul Kalam");
getch();
refresh();
outtextxy(145,258,"According to expert the answer is:");
gotoxy(35,18);
cout<<(char)(answer+64);
getch();
exp_ad=0;
break;
}
break;
}
}
//**************************************************//
// -*- Main Funciton -*- //
//**************************************************//
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setbkcolor(0);
Display x;
x.start();
x.boxes();
Text t;
t.put_levels();
t.put_lifeline();
t.put_name();
char ch;
int choice=1;
question q;
getch();
do
{
if (choice==1)
{
t.refresh();
q.put_ques();
}
if (choice==2)
{
t.refresh();
q.put_ques(1);
}
ch=getch();
switch(ch)
{
case '1' :
q.options(1);
choice=1;
break;
case '2' :
q.options(2);
choice=2;
break;
case '3' :
exit(0);
case 'a' :
case 'A' :
q.check_ans(1);
choice=1;
break;
case 'b' :
case 'B' :
q.check_ans(2);
choice=1;
break;
case 'c' :
case 'C' :
q.check_ans(3);
choice=1;
break;
case 'd' :
case 'D' :
q.check_ans(4);
choice=1;
break;
// case 27 :
// exit(0);
default:
choice=0;
}
}while(1);
}
