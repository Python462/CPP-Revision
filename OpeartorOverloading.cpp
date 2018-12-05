#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		void setdata(int a,int b)
		{
			x=a,y=b;
		}
		void showdata()
		{
			cout<<"\nx="<<x<<" y="<<y;
		}
		complex operator+(complex s){
			complex temp;
			temp.x=x+s.x;
			temp.y=y+s.y;
			return(temp);
		}
		complex operator-(){
			complex temp;
			temp.x=-x;
			temp.y=-y;
			return(temp);
		}
		complex operator++(){//for using s1++ use operator++(int)
			complex temp;
			temp.x=++x;
			temp.y=y++;
			return(temp);
		}
};
main()
{
	complex s1,s2;
	s1.setdata(3,4);
	s2.setdata(5,6);
    complex s3=s1+s2;//s1.operator+(s2);//complex	s3=s1.stry(s2);
	s3.showdata();
	complex s4=-s1;//s4=s1.operator-();//unary operator overloading
	s4.showdata();
	complex s5=++s1;//
	s1.showdata();
	s5.showdata();
}
