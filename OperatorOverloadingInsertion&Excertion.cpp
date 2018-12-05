#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		friend istream& operator>>(istream&,complex&);
	    friend ostream& operator<<(ostream&,complex);//these operator overloading only works with friend function       
};
    istream& operator>>(istream &in,complex &s){
		cin>>s.x>>s.y;
	//	return(cin);
		}
	ostream& operator<<(ostream &out,complex s){
		cout<<s.x<<" "<<s.y;
	//	return(out);
	}
main()
{
	complex s1;
	cout<<"enter a complex no\n";
	cin>>s1;
	cout<<"entered complex no is:"<<s1;
}
