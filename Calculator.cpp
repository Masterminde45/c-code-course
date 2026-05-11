#include <iostream>
using namespace std;
int main () {
    // Integer division example
    int totalPoints = 95;
    int numTests = 3;
    double average1 = totalPoints / numTests; // what happens here?
    cout << "Average (implicit): " << average1 << endl;
    
    // Character to integer conversion example
    char grade = 'B';
    int gradeValue = grade; // ASCII conversion
    cout << "ASCII value of 'B' :" << gradeValue << endl;
// Fix the division problem with explicit casting
    double average2 = static_cast <double>(totalPoints) / numTests; 
    cout << "Average (explicit): " << average2 << endl;
    double average3 = totalPoints / static_cast <double> (numTests);
    cout << "Average (explicit 2): " << average3 << endl;
    // Demonstrate precision loss when converting back
    double preciseValue = 99.99;
    int truncated = static_cast<int>(preciseValue);
    cout << "Origional value: " << preciseValue << endl;
    cout << "Truncated value: " << truncated << endl;
    return 0;

}