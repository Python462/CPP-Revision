//http://www.cppforschool.com/tutorial/files2.html
#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt",ios::app);
    
    char str[30] = (" HEllo world");
    int pos;
    //Write string to the file.
    fout << str;
    pos=fout.tellp();
    cout<<pos;
    fout.close();
    return 0;
}
