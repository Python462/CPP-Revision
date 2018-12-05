#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setbase
using namespace std;
int main () 
{
	float v=123.456;
  cout <<v<<"\n";
  cout <<setprecision(4)<<v<<endl;
  cout <<setprecision(2)<<v<<endl;
  return 0;
}
// The precision determines the maximum number of digits that shall be output on insertion operations to express floating-point values, counting both the digits before and after the decimal point.
 // You must include <iomanip> to use this manipulator.
