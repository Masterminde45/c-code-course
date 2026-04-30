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

return 0; 
}