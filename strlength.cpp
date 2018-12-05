#include<iostream>
#include<string>
using namespace std;

/*int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    int i; //Hold length of string
    
   // for(i = 0; str[i] != '\0'; i++);

    cout << "Length of string is: " << strlen(str);
	
    return 0;
}*/
//This part was for string created by array;

// string::length
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  std::cout << "The size of str is " << str.length() << " bytes.\n";
  cout<<str[7];
  return 0;
}
