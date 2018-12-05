//Let us see how namespace scope the entities including variable and functions -

#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}
using namespace first_space;
int main () {
   // Calls function from first name space.
   func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}
