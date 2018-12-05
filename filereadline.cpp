#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");

    int count = 0;
    char str[80];
    
    while(!fin.eof())
    {
        fin.getline(str,80);
        count++;
    }
    
    cout << "Number of lines in file are " << count;
  
    fin.close();
    return 0;
}
