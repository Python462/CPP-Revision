 #include<iostream>
using namespace std;
class complex
{
	int x;
	int y;
	
	public:
			void setdata(int a,int b)
		{
			x=a,y=b;
		}
		void showdata()
		{
			cout<<"\nx="<<x<<" y="<<y;
		}
	complex operator-()
	    {
	    	complex temp;
			temp.x=-x;
			temp.y=-y;
			return(temp);
		}
};
main()
{
	complex s1,s2;
	s1.setdata(3,4);
	s2=s1.operator-();
	//s2=-s1;
	s2.showdata();
}
