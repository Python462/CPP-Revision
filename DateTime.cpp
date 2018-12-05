#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
  time_t rawtime;
  class tm * timeinfo;
  char buffer[80];
  time (&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer,sizeof(buffer),"%d-%m-%Y \n",timeinfo);
  string date(buffer);
  strftime(buffer,sizeof(buffer),"%I:%M:%S",timeinfo);
  string time(buffer);
  cout << date;
  cout << time;
  return 0;
}
