#include<iostream>
#include<vector>

using namespace std;

main()
{
	vector<int> v ;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	for (auto &x : v)
    cout << x << ' ';
}
