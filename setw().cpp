// setw() example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setbase
using namespace std;
int main () 
{
	int v=12345;
  cout <<v<<"\n";
  cout <<setw(3) <<v<<endl;
  cout <<setw(8) <<v<<endl;
  return 0;
}
