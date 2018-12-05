#include <iostream>
using namespace std;

int main()
{
    int input_base, line = 1, stars = 1, no_of_stars, spaces = 1, no_of_spaces = 1;
   
    cout << "Please enter the base of diamond: ";
    cin >> input_base;
   
    no_of_stars = input_base;
    for (line = 1; line <= input_base; line++){

       for (stars = 1; stars <= no_of_stars; stars++)
           cout << "*";

       for (spaces = 1; spaces <= no_of_spaces; spaces++)
           cout << " ";

       for (stars = 1; stars <= no_of_stars; stars++)
           cout << "*";

       cout << endl;
       no_of_stars--;
       no_of_spaces += 2;
    }

    no_of_spaces = 1;
    no_of_stars = 1;
    for (int counter = 1; counter<input_base; counter++)
       no_of_spaces = no_of_spaces += 2;

    for (line = 1; line <= input_base; line++){

       for (stars = 1; stars <= no_of_stars; stars++)
           cout << "*";

       for (spaces = 1; spaces <= no_of_spaces; spaces++)
           cout << " ";

       for (stars = 1; stars <= no_of_stars; stars++)
           cout << "*";

       cout << endl;
       no_of_stars++;
       no_of_spaces -= 2;
    }

    return 0;
}
