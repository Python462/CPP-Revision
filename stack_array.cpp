#include<iostream>
using namespace std;

class stack
{
	int stk[10],top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int x)
		{
			if(top>10)
			{
				cout<<"the stack is full";
				return;
			}
			
			stk[++top]=x;
			cout<<"successfully inserted:"<<x;
		}
		
		void pop()
		{
			if(top<0)
			{
				cout<<"the stack is empty";
				return;
			}
			cout<<"the deleted element is"<<stk[top--];
		}
		
		void display()
		{
			if(top<0)
			{
				cout<<"the stock is empty";
				return;
			}
			for(int i=top;i>=0;i--)
			{
				cout<<stk[i]<<" ";
			}
		}
	};
	
	int main()
	{
		int ch;
		stack st;
		 while (1)
		 {
		 	cout<<"\n Press 1 to push \n press 2 to pop \n press 3 to display";
		 	cin>>ch;
		 	
		 	switch(ch)
		 	{
		 		case 1:cout<<"enter the element:";
		 		cin>>ch;
		 		st.push(ch);
		 		break;
		 		case 2:st.pop();
		 		break;
		 		case 3:st.display();
		 		break;
		 		case 4:exit(0);
			}
		 }
	}
