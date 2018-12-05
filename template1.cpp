#include<iostream>
using namespace std;
template <class x>
x big(x a,x b)
{
	cout<<a<<" "<<b<<"\n";
}

int main()
{
big(4,5);
big(5.6,3.4);	
}
