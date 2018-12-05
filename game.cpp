#include<iostream>
using namespace std;
int main()
{
	int m=21,n=0,user,c;
	
	{
			int i;
	printf("\n\n\n");
	printf("    ___________________________________________________________________\n");
	for(i=0;i<3;i++)
	printf("   |                                                                   |\n");
	printf("   |                    ~~~~~WELCOME TO Game~~~~~                      |\n");
	for(i=0;i<3;i++)
	printf("   |                                                                   |\n");
	printf("   |___________________________________________________________________|\n");
	printf("\n");

	}
	cout<<"\t\tRule:\nthere are 4 match sticks ,u have to choose either 1,or 2,or 3,or 4 matchstick\n after that PC will choose its stick";
	cout<<" Those among u who will pick the last stick will loose the game...\n";
	
	while(n!=20)
	{
		cout<<"Enter any no. of stick between 1 to 4\n";
		cin>>user;
		if(user<1||user>4)
		{
		continue;
		}
		             
		n+=user;
		cout<<"\t\tTotal stick choosen: "<<n<<"\n";
		if(n==20)
		{
			cout<<"user is winner\n";
			exit ;
		}
		
		if(n<=4)
		{
			c=5-n;
		}
		
		if(n>=5&&n<=9)
		{
			c=10-n;
		}
		
		if(n>=11&&n<=14)
		{
			c=15-n;
		}
		
		if(n>=16)
		{
			c=20-n;
		}
	    
	    cout<<"PC have choosen "<<c;
		n+=c;
		cout<<"\t\tTotal stick choosen: "<<n<<"\n";
		if(n==20)
		{
			cout<<" PC is winner\n";
		}              
	}
}
