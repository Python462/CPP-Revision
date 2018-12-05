#include <iostream>
#include <string>
#include <iomanip>
int main(){

    std::string divider = "******";

    int pizza, side, drink, exit, choice, pizzaNum = 0, sideNum = 0, drinkNum = 0;

    double pizzaPrice = 11.99, sidePrice = 4.99, drinkPrice = 1.99, salesTax = 0.06, total;

    std::cout << divider;

    std::cout << "\n\nTakeout Menu"

    << "\n\n1) Order pizza ($11.99ea)"

    << "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

    std::cout << "\n\nYour choice (1-4)? ";

    std::cin >> choice;

    std::cout << "\n";

    std::cout << divider;

    do {

    switch (choice){

    case 1:

    int peperoni, cheese, supreme, meatlovers, pizzaChoice;

    std::cout << "\n\n1) Peporoni"

    << "\n2) Cheese"

    << "\n3) Supreme"

    << "\n4) Meatlovers";

    std::cout << "\n\nWhich type of pizza? ";

    std::cin >> pizzaChoice;

    switch (pizzaChoice){

    case 1:

    std::cout << "\nHow many peperoni pizzas? ";

    std::cin >> pizzaNum;

    std::cout << "\n" << divider;

    break;

    case 2:

    std::cout << "\nHow many cheese pizzas? ";

    std::cin >> pizzaNum;

    std::cout << "\n" << divider;

    break;

    case 3:

    std::cout << "\nHow many supreme pizzas? ";

    std::cin >> pizzaNum;

    std::cout << "\n" << divider;

    break;

    case 4:

    std::cout << "\nHow many meatlovers pizzas? ";

    std::cin >> pizzaNum;

    std::cout << "\n" << divider;

    break;

    default:

    std::cout << pizzaNum << " is not a valid character!";

    int peperoni, cheese, supreme, meatlovers, pizzaChoice;

    std::cout << "\n\n1) Peporoni"

    << "\n2) Cheese"

    << "\n3) Supreme"

    << "\n4) Meatlovers";

    std::cout << "\n\nWhich type of pizza? ";

    std::cin >> pizzaChoice;

    std::cout << "\n" << divider;

    break;

    }

    std::cout << "\n\nTakeout Menu"

    << "\n\n1) Order pizza ($11.99ea)"

    << "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

    std::cout << "\n\nYour choice (1-4)? ";

    std::cin >> choice;

    std::cout << "\n";

    std::cout << divider;

    break;

    case 2:

    int coleslaw, fries, salad, breadsticks, sideChoice;

    std::cout << "\n\n1) Coleslaw (1 cup)"

    << "\n2) Fries (medium)"

    << "\n3) Salad (medium bowl)"

    << "\n4) Breadsticks (4)";

    std::cout << "\n\nWhich type of side? ";

    std::cin >> sideChoice;

    switch (sideChoice){

    case 1:

    std::cout << "\nHow many cups of coleslaw? ";

    std::cin >> sideNum;

    std::cout << "\n" << divider;

    break;

    case 2:

    std::cout << "\nHow many fries? ";

    std::cin >> sideNum;

    std::cout << "\n" << divider;

    break;

    case 3:

    std::cout << "\nHow many bowls of salad? ";

    std::cin >> sideNum;

    std::cout << "\n" << divider;

    break;

    case 4:

    std::cout << "\nHow many breadsticks? ";

    std::cin >> sideNum;

    std::cout << "\n" << divider;

    break;

    default:

    std::cout << sideNum << " is not a valid character!";

    int peperoni, cheese, supreme, meatlovers, pizzaChoice;

    std::cout << "\n\n1) Coleslaw (1 cup)"

    << "\n2) Fries (medium)"

    << "\n3) Salad (medium bowl)"

    << "\n4) Breadsticks (4)";

    std::cout << "\n\nWhich type of side? ";

    std::cin >> sideChoice;

    std::cout << "\n" << divider;

    break;

    }

    std::cout << "\n\nTakeout Menu"

    << "\n\n1) Order pizza ($11.99ea)"

    << "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

    std::cout << "\n\nYour choice (1-4)? ";

    std::cin >> choice;

    std::cout << "\n";

    std::cout << divider;

    break;

    case 3:

    int coke, sprite, drpepper, lemonade, drinkChoice;

    std::cout << "\n\n1) Coke"

    << "\n2) Sprite"

    << "\n3) Dr. Pepper"

    << "\n4) Lemonade";

    std::cout << "\n\nWhich type of drink? ";

    std::cin >> drinkChoice;

    switch (drinkChoice){

    case 1:

    std::cout << "\nHow many Coke's? ";

    std::cin >> drinkNum;

    std::cout << "\n" << divider;

    break;

    case 2:

    std::cout << "\nHow many Sprite's? ";

    std::cin >> drinkNum;

    std::cout << "\n" << divider;

    break;

    case 3:

    std::cout << "\nHow many Dr. Pepper's? ";

    std::cin >> drinkNum;

    std::cout << "\n" << divider;

    break;

    case 4:

    std::cout << "\nHow many Lemonade's? ";

    std::cin >> drinkNum;

    std::cout << "\n" << divider;

    break;

    default:

    std::cout << drinkNum << " is not a valid character!";

    int coke, sprite, drpepper, lemonade, drinkChoice;

    std::cout << "\n\n1) Coke"

    << "\n2) Sprite"

    << "\n3) Dr. Pepper"

    << "\n4) Lemonade";

    std::cout << "\n\nWhich type of drink? ";

    std::cin >> drinkChoice;

    std::cout << "\n" << divider;

    break;

    }

    std::cout << "\n\nTakeout Menu"

    << "\n\n1) Order pizza ($11.99ea)"

    << "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

    std::cout << "\n\nYour choice (1-4)? ";

    std::cin >> choice;

    std::cout << "\n";

    std::cout << divider;

    break;

    case 4:

    std::cout << "\n\nFine, we don't want your business anyways!";

    break;

    default:

    std::cout << "\n\n" << choice << " is not a valid choice. Please enter 1-4.\n\n";

    std::cout << divider;

    std::cout << "\n\nTakeout Menu"

    << "\n\n1) Order pizza ($11.99ea)"

    << "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

    std::cout << "\n\nYour choice (1-4)? ";

    std::cin >> choice;

    std::cout << "\n";

    std::cout << divider;

    break;

    }

    } while (choice != 4);

    if (choice == 4){

    std::cout << "\n\nORDER SUMMARY\n";

    if (pizzaNum != 1){

    std::cout << "\n" << pizzaNum << " pizzas";

    }

    else {

    std::cout << "\n" << pizzaNum << " pizza";

    }

    if (sideNum != 1){

    std::cout << "\n" << sideNum << " sides";

    }

    else {

    std::cout << "\n" << sideNum << " side";

    }

    if (drinkNum != 1){

    std::cout << "\n" << drinkNum << " drinks\n\n";

    }

    else {

    std::cout << "\n" << drinkNum << " drink\n\n";

    }

    std::cout << "PRICE SUMMARY";

    pizzaPrice = pizzaPrice * pizzaNum;

    sidePrice = sidePrice * sideNum;

    drinkPrice = drinkPrice * drinkNum;

    total = (pizzaPrice + sidePrice + drinkPrice);

    salesTax = total * salesTax;

    std::cout << "\n\nPrice of items: $" << std::setprecision(2) << std::fixed << total;

    total = total + salesTax;

    std::cout << "\nTax of items: $" << std::setprecision(2) << std::fixed << salesTax;

    if (total > 100){

    std::cout << "\n------"

    << "\n|Total price: $" << std::setprecision(2) << std::fixed << total << "|\n"

    << "------\n\n";

    }

    else if (total > 10 && total < 100){

    std::cout << "\n------"

    << "\n|Total price: $" << std::setprecision(2) << std::fixed << total << "|\n"

    << "------\n\n";

    }

    else if (total < 10){

    std::cout << "\n------"

    << "\n|Total price: $" << std::setprecision(2) << std::fixed << total << "|\n"

    << "------\n\n";

    }

    }

    std::cout << divider << "\n\n";

}
