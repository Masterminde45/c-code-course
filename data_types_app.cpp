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




return 0;
}
