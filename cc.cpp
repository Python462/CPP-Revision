//(a+(B+C);
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	string s,s1="";
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' && s[i+4]==')')
		{
			swap(s[i+2],s[i+3]);
		}
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i+1]=='(')
		{
			s=s+s[i];
			for(int k=i;k<s.length();k++)
				{
					s[k]=s[k+1];
				}
		}
	}
	s+=s1;
	s.erase(remove(s.begin(),s.end(),'('),s.end());
	s.erase(remove(s.begin(),s.end(),')'),s.end());
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	cout<<s;
}
