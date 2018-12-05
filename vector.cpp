#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
//	vector <int>::iterator itr;
//	for(itr=v.begin();itr!=v.end();itr++)
//	cout<<*itr;
    for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<"\n";
}
int main()
{
	vector<int> v;
	cout<<"initial value = "<<v.size();
	cout<<"\nEnter 5 integer value\n";
	int x;
	for(int i=0;i<5;i++)
	{
		cin>>x;
	    v.push_back(x);
	}
	cout<<"size after adding 5 values: ";
	cout<<v.size()<<"\n";
	
	cout<<"current contents: \n";
	display(v);
	v.push_back(6.6);                      
	cout<<"\n size = "<<v.size()<<"\n";
	cout<<"Contents now: \n";
	display(v);
	
	vector<int> :: iterator itr = v.begin();
	itr=itr+3;
	v.insert(itr,4,9);                             //////insert
	
	cout<<"\ncontents after inserting: \n";
	display(v);
	
	v.erase(v.begin()+3,v.begin()+5);               /////////erase
	
	cout<<"\ncontents after deletion:\n";
    display(v);
	cout<<"End\n";
}
