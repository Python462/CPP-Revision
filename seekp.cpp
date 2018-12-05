//http://www.cppforschool.com/tutorial/files2.html
#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt",ios::ate);
    //Write string to the file.
    cout<<fout.tellp();
    fout.seekp(-20,ios::cur);
    cout<<fout.tellp();
   //fout<<"hero alom";
    fout.close();
    return 0;
}
