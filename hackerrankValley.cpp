#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{
	int c=0,cprev=0,valley=0;
	for(int i=0;i<s.length();i++)
	{
		cprev=c;
		if(s[i]=='U')
		{
			c++;	
		}
		else
		{
			c--;
		}
		if(cprev==-1)
		{
			if(c==0)
			valley++;
		}
	}
	return valley;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";
	cout<<result;
    fout.close();
	
    return 0;
}

