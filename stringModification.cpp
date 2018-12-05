#include<iostream>
#include<string.h>
using namespace std;

int main( )
{
    string s1="12345";
    string s2("abcde");
    string s3=("vikrant");
    //insert string into another string;
    
    s1.insert(3,s2,1,3);
    cout<<s1<<"\n";
    cout<<s2<<"\n";
    
    //removing character in a string;
    s1.erase(3,2);    // frm 3rd index delete 2 character;
    cout<<s1<<"\n";
    
    //replacing character in a string;
    
    s3.replace(1,3,s2);     //frm 1st index 3 character will be deleted and "abcde" will be replaced there;
    cout<<s3<<"\n";
    return 0;
}
