#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");
    char ch;
     ch=fin.get();
         cout << ch;
         fin.seekg(12);
         fin.get(ch);
         cout<<ch<<"\n";
         fin.seekg(-5,ios::cur);
         fin.get(ch);
          cout<<ch;
    fin.close();
    return 0;
}
