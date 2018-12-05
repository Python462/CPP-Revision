// setbase example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setbase
using namespace std;
int main () 
{
	int v=10;
  cout <<setbase(10)<<v<<"\n";
  cout <<setbase(8) <<v<<endl;
  cout <<setbase(16) <<v<<endl;
  return 0;
}
