#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");
    
    char ch;
     ch=fin.get();
    while(!fin.eof())
    {
        
         cout << ch;
          fin.get(ch);
    }
    
    fin.close();
    return 0;
}
