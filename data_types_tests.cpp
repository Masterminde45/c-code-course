#include <iostream>
#include <climits>
int main() {
    // Declareing variables of different data types
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRanke = 'A';
    bool gameActive = true;
    using namespace std;
    // Display the memory usage of each data type
    std::cout << "Memory Usage Analysis:" << std::endl;
    cout << "int uses: " << sizeof(int) << " bytes" << endl;
    cout << "float uses: " << sizeof(float) << " bytes" << endl;
    cout << "double uses: " << sizeof(double) << "bytes" << endl;
    cout << "char uses: " << sizeof(char) << " bytes" << endl;
    cout << "bool uses: " << sizeof(bool) << " bytes" << endl;

    return 0;

}
