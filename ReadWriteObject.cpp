#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student
{
int roll_no;
char name1[20];
char name2[20];
public:
void read()
{
	cout<<"enter the rollno and name\n";
cin>>name1>>name2;
}
void show()
{
cout<<name2<<name1;
}
};

int main()
{
system("cls");
system("color 3");
student s1;
s1.read();
ofstream out("stu.txt",ios::binary);
out.write((char*)&s1,sizeof(s1));
ifstream in("stu.txt",ios::binary);
in.read((char*)&s1,sizeof(s1));
s1.show();
getch();
}
