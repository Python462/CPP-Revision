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
	    friend complex operator+(complex,complex);//friend operator overloading is diffrentfrm Normal operator overloading
        friend complex operator-(complex);
};
complex operator+(complex r,complex s){
			complex temp;
			temp.x=r.x+s.x;
			temp.y=r.y+s.y;
			return(temp);          // or return((x+s.x),(y+s.y));
		}
		complex operator-(complex s){
			complex temp;
			temp.x=-s.x;
			temp.y=-s.y;
			return(temp);
		}
main()
{
	complex s1,s2;
	s1.setdata(3,4);
	s2.setdata(5,6);
    complex s3=s1+s2;//operator+(s1,s2);//u can't call frnd function operator using dot operator
	s3.showdata();
	complex s4=-s1;//operator-(s1);
	s4.showdata();
}
