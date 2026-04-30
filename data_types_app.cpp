#include <iostream>
#include <climits> //for data types limits like INT_MAX


int main() {
    // Display program header
    std::cout << "=========================================" << std::endl;
    std::cout << " PRACTICAL DATA TYPE APPLICATION         " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "This program demonstrates  appropiate usage of different data types" << std::endl;
    std::cout << "for  various kinds of information." << std::endl << std::endl;
// ------ AGE DATA SECTION -------

    std::cout << "\n------ AGE DATA SECTION -------" <<std::endl;
    std::cout << "selecting appropiate data types for age infotmation:" << std::endl;

    // Integer type for ages (no fractional years needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;

    // Display age information
    std::cout << "Child age: " << childAge << " years" << std::endl;
    std::cout << "Teen age: " << teenAge << " years" << std::endl;
    std::cout << "Adult age: " << adultAge << " years" << std::endl;
    // show memory usage
    std::cout << "\nAge data memory usage: " <<std::endl;
     std::cout << "size of int (for ages): " << sizeof(int) << "bytes" << std::endl;
    
    // Demonstrate age calculations
    std::cout << "\nAge calculations:" << std::endl;
    int totalAges = childAge + teenAge + adultAge;
    std::cout << "Total of all ages: " << totalAges << " years" << std::endl;
// aditional age calculations
double averageAge = totalAges /3.0;
std::cout << " Average age: " << averageAge << " years" << std::endl;
// calculation of average year of the three goups
int oldestAge = adultAge;
int youngestAge =childAge;
int ageDifference = oldestAge - youngestAge;
// calculation of  age differnce between youngest and oldest 
std::cout << "Age difference between oldest and youngestage: " 
<< ageDifference << " years" << std::endl;
// calculation of my current age
int birthYear = 2005;
int currentYear = 2026;
int mycurrentage =  currentYear - birthYear;
std::cout << "my current age: " << mycurrentage << " years" << std::endl;
// ------ PRICE DATA SECTION -------
std::cout << "n------ PRICE DATA SECTION -------" <<std::endl;
// Use double for price data (needs decimal precision)
double coffeePrice = 3.99;
double laptopPrice = 1299.49;
double housePrice = 350000.00;

// Display price information
std::cout << "Cofee price: $" << coffeePrice << std::endl;
std::cout << "Laptop Price: $" << laptopPrice << std::endl;
std::cout << "House price: $" << housePrice << std::endl;

// show memory usage
float priceAsFloat = 19.99f;
double priceAsDouble = 19.99;
std::cout << "\nPrice storage comparison:" << std::endl;
std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << "bytes)" << std::endl;
std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << "bytes)" << std::endl;

//Simpel price calculations
double totalPrice = coffeePrice + laptopPrice;
std::cout << "\nPrice calculations:" << std::endl;
std::cout << "Coffee+Laptop total: $" << totalPrice << std::endl;
// ------- CHARACTER DATA SECTION -------
std::cout << "\n------ CHARACTER DATA SECTION -------" << std::endl;
std::cout << "Selecting appropiate data types for character information:" <<std::endl;

// Character varables for singel characters
char grade = 'A';
char symbol = '#';
char initial = 'J';

// Display character information
std::cout << "Student grade:: " << grade << std:: endl; 
std::cout << "Special symbol: " << symbol <<std :: endl;
std::cout << "First initial: " << initial <<std ::endl;

// Show how characters relate to numbers (ASCII values)
std::cout << "\nCharacter to number conversion:" << std::endl;
std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;

// Show memory usage
std::cout << "\nCharacter data memory data usage:" << std::endl;
std::cout << "size of char: " << sizeof(char) << " bytes" << std::endl;

// Character practice
char firstinitial = 'M';
char secondinitial = 'P';

std::cout << "\nMy initials: " << firstinitial << secondinitial << std::endl;
std::cout << " M has the ASCII value: " << (int)firstinitial << std::endl;
std::cout << "P has the ASCII value: " << (int)secondinitial <<std::endl;
char favouriteletter = 'A';
std::cout << "My favourite letter is: " << favouriteletter << std::endl;
std::cout << "A has the ASCII value: " << (int)favouriteletter << std::endl;
// ------ BOOLEAN DATA SECTION -------
std::cout <<"\n------ BOOLEAN DATA SECTION -------" << std::endl;
std::cout << "Using boolean data types for true/false information:" <<std::endl;
// Boolean variables for simple flags
bool isActive = true;
bool hasPermission=false;
bool isCompleted = true;
// Display boolean values (they show as 1 for true, 0 for false)
std::cout << " User account active: " <<isActive << std::endl;
std::cout << "User has admin Permission: " << hasPermission << std::endl;
std::cout << "Task completed: " << isCompleted << std::endl;

//show memory usage
std::cout << "\nBoolean data memory usage:" << std::endl;
std::cout << "size of bool: " << sizeof(bool) << " bytes" << std::endl;

// simpel boolean comparisons
std::cout <<"\nBoolean comparisons:" << std::endl;
std::cout << "Are both account active AND task completed? ";
if (isActive == true && isCompleted ==true) {
    std::cout << "Yes" << std::endl;
} else {
    std::cout << "no" << std::endl;

}

return 0;








return 0; 
}