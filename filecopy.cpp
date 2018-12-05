//Program to copy contents of file to another file.
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("sample.txt");
    
    ofstream fout;
    fout.open("out.txt");
    
    char ch;
    fin.get(ch);
    while(!fin.eof())
    {
    	fout << ch;
        fin.get(ch);
        
    }

    fin.close();
    fout.close();
    return 0;
}

