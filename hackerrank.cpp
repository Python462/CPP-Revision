#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) 
{
    int mid=n/2;
    if(p<=mid)
    {
    	if(p==1)
    	return 0;
    	
    	else
    	{
    		int a=p/2;
    		return a;
		}
	}
	
	else
	{
		if(n%2!=0)
		{
			if(p==n||p==(n-1))
			return (0);
			else
			{
		
				return ((n-p)/2);
			}
		}
		else
		{
			return ((n-p+1)/2);
		}
	}
 
}

int main()
{
	while (1)
	{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();
	cout<<result;
}
    return 0;

}

