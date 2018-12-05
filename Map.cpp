#include <iostream>
#include <map>

using namespace std;

int main(void)
{
   map<char, int> m1 = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5}
            };

   map<char, int> m2(m1.begin(), m1.end());

   cout << "Map contains following elements" << endl;

   for (auto it = m2.begin(); it != m2.end(); ++it)
      cout << it->first << " = " << it->second << endl;

   return 0;
}
