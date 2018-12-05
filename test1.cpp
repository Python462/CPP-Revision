#include <iostream>
#include <new>
using namespace std;

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
    
    cout << "You have entered: ";
    for (n=0; n<row; n++)
    for(int k=0;k<col;k++)
      cout << array[n][k] << ", ";
      
    delete[] array;
    
 	return 0;
}
