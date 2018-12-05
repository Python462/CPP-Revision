#include<iostream>
#include<string.h>
using namespace std;

int main( )
{
    string s1="road";
    string s2("read");
    string s3=("red");
  
  cout<<s2.compare(s2.size()-2,2,s2,s1.size()-2,2);
    return 0;
}
