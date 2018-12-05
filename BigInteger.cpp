#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n)
{
    vector <int> ans ;
    ans.push_back(1) ;
    vector <int> :: iterator itr ;
 
    for(int i = 2 ; i <= n ; i++)
	{
        for(itr = ans.begin() ; itr != ans.end() ; itr++)
            *itr *= i ;
        for(int j = 0 ; j < ans.size() ; j++)
            if(ans[j] >= 10){
                if(j == ans.size() - 1)
                    ans.push_back(0) ;
                ans[j+1] = ans[j+1] + (ans[j]/10) ;
                ans[j] = ans[j]%10 ;
            }
    }
 
    for(int i = ans.size() - 1 ; i > -1 ; i--)
        cout << ans[i] ;

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

