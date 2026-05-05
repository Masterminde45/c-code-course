#include <iostream>
#include <iomanip> // for formatting output

using namespace std;

// Constants for conversion formulas
const double FREEZING_POINT_C = 0.0; // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0; // Freezingpoint of water in Fahrenheit
const double FREEZING_POINT_K = 273.15; //Freezingpoint of water in Kelvin

const double ABSOLUTE_ZERO_C = -273.15; // Absolute zero in Celsius 
const double ABSOLUTE_ZERO_F = -459.67; // Absolute zero in Fahrenheit
const double ABSOLUTE_ZERO_K = 0.0; // Asolute zero in Kelvin

const double F_TO_C_FACTOR = 5.0 / 9.0; // Multiplication factor to convert F to C
const double C_TO_F_FACTOR = 9.0 / 5.0; // Multiplication factor to convert C to F
const double C_TO_K_FACTOR = 1.0; // MUltiplication factor to convert C to K
const double K_TO_C_FACTOR = 1.0; // Multiplication factor to convert K to C
const double F_TO_K_FACTOR = 5.0/90; // Multiplicationfactor to convert F to K
const double K_TO_F_FACTOR = 9.0 /5.0; // Multiplication factor to convert K to F

const double C_TO_K_OFFSET = 273.15; // Value added to C to convert c to k
const double K_TO_C_OFFSET = 273.15; // Value subtracted from K to convert K to C
const double F_TO_K_OFFSET = 459.67; // Value added to F before converting F to K
const double K_TO_F_OFFSET = 459.67;  // Value subtrscted after converting K to F

//function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahreinheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);

int main() {
    // Display Program header
    cout << "========================================" << endl;
    cout << "        TEMPERATURE CONVERTER           " << endl;
    cout << " =======================================" << endl;
    cout << "This program converts temperatueres between" << endl;
    cout << " Celsisus, Fahrenheit, and Kelvin." << endl;



    return 0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius - ABSOLUTE_ZERO_C) * C_TO_F_FACTOR + ABSOLUTE_ZERO_F;
}
    double fahrenheitToCelsius(double fahrenheit){
       return (fahrenheit - ABSOLUTE_ZERO_F) * F_TO_C_FACTOR + ABSOLUTE_ZERO_C;
 }
