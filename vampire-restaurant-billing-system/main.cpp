#include <iostream>
#include <vector>

int main() {

/* Standard variables */
std::string restaurantName = "Darculo Restaurento";

/* Storing the menu in vectors*/
std::vector<std::string> veg = {"Carrot Kebabs", "Potato Monsters", "Onion Chops", "Asparagus Sticks", "Satanic Breadsticks"};

std::vector<std::string> nonVeg = {"Human Breast Meat", "Pig Kebabs", "Random Meat Sticks", "Bacon Chops", "Lucifer Monsters"};

/* Printing the menu*/
std::cout << "Welcome to \n";
std::cout << "----------------------- \n";
std::cout << "| Darculo Restaurento | \n";
std::cout << "----------------------- \n";

std::cout << "Please enter your name: \n";
std::string userName;
std::cin >> userName;
std::cout << "Hello, " << userName << ". " << "Welcome to " << restaurantName << " ! " << "Your scary neighbourhood restaurant. \n";
std::cout << "Would you like to have Veg? Enter YES or NO only. \n";
std::string isVeg;
std::cin >> isVeg;

if (isVeg == "YES") {
    std::cout << "\n";
    std::cout << "---------------------------------VEG MENU---------------------------------------------- \n";
    std::cout << "|    ID     |     Dish Name     |          Description                      |  Cost   | \n";
    std::cout << "|    0      |   Carrot Kebabs   | Living, Crying Carrots in HOT OIL!        |   $30   | \n";
    std::cout << "|    1      |  Potato Monsters  | Laughing, Devilish Monsters in yo stomach |   $50   | \n";
    std::cout << "|    2      |    Onion Chops    | Chops of Devilish Onion Monkeys           |   $90   | \n";
    std::cout << "|    3      | Asparagus Sticks  | Monstrous Asparagus Sticks                |   $40   | \n";
    std::cout << "|    4      |Satanic Breadsticks| Breadsticks of Hell!                      |   $100  | \n";
    
    };

if (isVeg == "NO") {
    std::cout << "\n";
    std::cout << "---------------------------------NONVEG MENU------------------------------------------- \n";
    std::cout << "|    ID     |     Dish Name     |          Description                      |  Cost   | \n";
    std::cout << "|    0      | Human Breast Meat | Living, Crying Carrots in HOT OIL!        |   $50   | \n";
    std::cout << "|    1      |    Pig Kebabs     | Laughing, Devilish Monsters in yo stomach |   $70   | \n";
    std::cout << "|    2      |Random Meat Sticks | Chops of Devilish Onion Monkeys           |   $100  | \n";
    std::cout << "|    3      |    Bacon Chops    | Monstrous Asparagus Sticks                |   $70   | \n";
    std::cout << "|    4      | Lucifer Monsters  | Breadsticks of Hell!                      |   $300  | \n";
    
    };


}