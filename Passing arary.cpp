#include<iostream>
using namespace std;
static int row=3;
static int col=3;
int array(int p[row][col])
{
	cout<<__func__<<endl;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
	cout<<p[i][j]<<" ";
    }
}
main()
{
int a[row][col]={{1,2,3},{4,5,6},{8,9,10}};
array(a);
}
