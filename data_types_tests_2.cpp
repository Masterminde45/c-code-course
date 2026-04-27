#include <iostream>
#include <climits>
int main() {
    // Test integer limits
    std::cout << "Iteger Limits and Owerflow" << std::endl;
    int maxValue = INT_MAX;
    std::cout << "Maximum int value:" << maxValue << std::endl;
    std::cout << "What happens when we add 1: " << maxValue + 1 <<std::endl;
    // Test type casting between different data types
    std::cout << "\nType Casting Examples:" << std::endl;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);
    std::cout << "Origional price (double): " <<precisePrice << std::endl;
    std::cout <<  " After casting to int: " << roundedPrice << std::endl;
    // Test character to integer conversion
    char letter = 'C';
    int letterValue = static_cast <int> (letter);
    std::cout << "Character '" << letter << "' has ASCII value: " << letterValue  << std::endl;
       return 0;
       


}
