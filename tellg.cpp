#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");
    int pos;
    char ch;
     ch=fin.get();
    while(!fin.eof())
    {
         cout << ch;
         pos=fin.tellg();
          fin.get(ch);
    }
    
    cout<<"\n"<<pos;
    fin.close();
    return 0;
}
