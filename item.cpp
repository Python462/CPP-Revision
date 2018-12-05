#include <iostream>
//using namespace std;

class item
{
	int numb;
	int cost;
	public:
	getdata(int x,int y);
	putdata();
};

	item::getdata(int x,int y)
{
	numb=x;
	cost=y;
}
	item::putdata()  //scope resolution
{
	std::cout<<"\nNumber of items are: "<<numb;
    std::cout<<"\ncost of items are: "<<cost;
}


main()
{
	item i1,i2;
	i1.getdata(3,8);
	i1.putdata();
	i2.getdata(4,9);
	i2.putdata();
}
