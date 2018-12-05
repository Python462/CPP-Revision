//http://www.cppforschool.com/tutorial/files2.html
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt",ios::binary);
    
    char str[300] = ("Time is a great teacher but unfortunately \nit kills all its pupils. Berlioz");

    //Write string to the file.
    fout << str;

    fout.close();
    return 0;
}
