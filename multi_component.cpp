
// include necessary headers
#include <iostream> // For input/output operations
#include <iomanip> // for output formatting
#include <string> // For string data type
#include <chrono> // modern date and time handling
#include <random> // for random number generation
// Using the standard namespace
using namespace std;

int main() {
// Programtitle and introduction 
cout << "================================================" << endl;

cout << "          MULTI-COMPONENT PROGRAM               " << endl;
cout << "================================================" << endl;
cout << "This program demonstrates using multiple headers" <<endl;
cout << "and formatting techniques in C++." << endl <<endl;
// Component 1: Basic information display
cout << "------------ COMPONENT 1: BASIC INFO ------------" <<endl;
// Create variables to store information
/*
A string is a sequence of characters
A variable is a storage location that holds a value
*/
string name = "C++ Programming";
string version = "C++17";
string creator = "Bjarne Stroustrup";
int yearCreated = 1985;
string fact1 = "The first ISO C++ standard was published in 1998.";
bool fact2 = true;
int fact3 = 2017;
// Display the information
cout << "Lanuage: " << name << endl;
cout<< "Version: " << version <<endl;
cout << "Creator: " << creator << endl;
cout << "Year Created: " << yearCreated << endl << endl;
cout << "Interesting Fact 1: " << fact1 << endl;
cout << "Interesting Fact 2: Supports object-oriented programming? " << (fact2 ? "Yes" : "No") << endl;
cout << "Interesting Fact 3: C++17 standard publication year: " << fact3 << endl;
// Component 2: Formated numeric output
cout << "---------- COMPONENT 2: FORMATTED NUMBERS ---------" << endl;

// CReate numeric variables
double pi = 3.14159265358979323846;
double e = 2.71828182845904523536;
double goldenRatio = 1.61803398874989484820;

// Display with different precision
cout << "Default display:" << endl;
cout << "Pi = " << pi << endl;
cout << "e = " << e << endl;
cout << "Golden Ratio = " << goldenRatio << endl << endl;

// Reset formating
cout.unsetf(ios::fixed);
cout << setprecision(6);
// component 3: Table display

// Program end
cout << "\nProgram execution completed." << endl;
return 0;
}
