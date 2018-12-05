#include<iostream>
using namespace std;
class account
{
	public:
	int balance;
	static float rate;
	public:
	void setRate(float r)
	{
		rate=r;
	 } 
	 void display()
	 {
	 	cout<<rate;
	 }
};
float account::rate;
main()
{
	account a;
	account::rate=5.6;
   //a.setRate(8.4f);
    a.display();
   //cout<<rate;
   
}
