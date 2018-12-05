#include<iostream>
using namespace std;
void test(double x)
{
	cout<<"\nInside function";
	try
 {
	
	if(x==0)
	{
		throw x;
	}
	else {
	}
  }
   catch(int)
  {
  	cout<<"\nCatch1 double in fun";
  	throw;
	  }		  
	  
  catch(double)
  {
  	cout<<"\nCatch2 double in fun";
  	throw;
	  }		  
}

main()
{
	double a=0;
	try
	{
	  test(a);
}
	  catch(...)
	    {
	    	cout<<"\ninside catch of main()";
		}                  
     
}
