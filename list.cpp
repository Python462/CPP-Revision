#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l1)
{
	list<int>::iterator itr;
	for(itr=l1.begin();itr!=l1.end();itr++)
	cout<<*itr;
  
	cout<<"\n";
}
int main()
{
	list<int> l1;
	list<int> l2;
	cout<<"initial value = "<<l1.size();
	cout<<"\nEnter 5 integer value for list 1\n";
	int x;
	for(int i=0;i<5;i++)
	{
		cin>>x;
	    l1.push_back(x);
	}
	
cout<<"\nEnter 5 integer value for list 2\n";
	for(int i=0;i<5;i++)
	{
		cin>>x;
	    l2.push_back(x);
	}
	
	cout<<"size after adding 5 values: ";
	cout<<l1.size()<<"\n";
	
	cout<<"current contents: \n";
	display(l1);
	l1.push_front(-1.2);                       //push_front
	l1.push_back(6.6);                        //push_back
	cout<<"\n size = "<<l1.size()<<"\n";
	cout<<"Contents now: \n";
	display(l1);
	
//	list<int> :: iterator itr = l1.begin();
//	itr=itr+3;
	l1.pop_back();                             //////pop_back
	cout<<"\ncontents after pop_back: \n";
	display(l1);
	
	l1.pop_front();                             //////pop_front
	cout<<"\ncontents after pop_front: \n";
	display(l1);
	
	cout<<"On merging\n";
	l1.merge(l2);
	display(l1);
	
	l1.reverse();                                /////////reverse
	cout<<"\ncontents after reversing:\n";
    display(l1);
    
    	l1.sort();                                /////////reverse
	cout<<"\ncontents after sorting:\n";
    display(l1);
	cout<<"End\n";
}
