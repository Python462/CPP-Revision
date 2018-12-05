#include<iostream>
using namespace std;
int r,c;

void pass_array(int  **p,int row,int col)
{
	cout << "You have entered: ";
    for (int n=0; n<row; n++)
    for(int k=0;k<col;k++)
      cout <<p[n][k] << ", ";
}

int main ()
{
  int row,col,n;

  cout << "How many rows and cols would you like to type? ";
  cin >>row>>col;
  int **array;
  array=new int*[row];
  
  for(int rows=0;rows<row;rows++)
  {
  array[rows]=new int [col];
  }



    for (n=0; n<row; n++)
    for(int k=0;k<col;k++)
    {
      cout << "Enter number: ";
      cin >> array[n][k];
    }
    
	pass_array(array,row,col);
	  
    delete[] array;
    
 	return 0;
}
