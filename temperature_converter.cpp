#include <iostream>
#include <iomanip> // for formatting output
#include <limits>
#include <string>
#include <stdexcept> // for handeling invalid input

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
const double F_TO_K_FACTOR = 5.0 / 9.0; // Multiplicationfactor to convert F to K
const double K_TO_F_FACTOR = 9.0 / 5.0; // Multiplication factor to convert K to F

const double C_TO_K_OFFSET = 273.15; // Value added to C to convert c to k
const double K_TO_C_OFFSET = 273.15; // Value subtracted from K to convert K to C
const double F_TO_K_OFFSET = 459.67; // Value added to F before converting F to K
const double K_TO_F_OFFSET = 459.67;  // Value subtrscted after converting K to F

//function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);
void validateTemperatureInput(double& temperature, const string& scaleName, double minimumTemperature);

int main() {
    // Display Program header
    cout << "========================================" << endl;
    cout << "        TEMPERATURE CONVERTER           " << endl;
    cout << "========================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl;

    // Variable to control the program loop
    bool keepRunning = true;

    // Display the menu options
    while (keepRunning) {
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;
        cout << "\nEnter your choice (1-7): ";

        // Get user's menu choice
        int choice;
        cin >> choice;

        // Variable for temperature input
        double inputTemp, result;

        // Process the user's choice
        switch (choice) {
            case 1: // Celsius to Fahrenheit
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Celsius", ABSOLUTE_ZERO_C);
                result = celsiusToFahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " °F" << endl;
                break;

            case 2: // Fahrenheit to Celsius
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Fahrenheit", ABSOLUTE_ZERO_F);
                result = fahrenheitToCelsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " °C" << endl;
                break;

            case 3: // Celsius to Kelvin
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Celsius", ABSOLUTE_ZERO_C);
                result = celsiusToKelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " K" << endl;
                break;

            case 4: // Kelvin to Celsius
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Kelvin", ABSOLUTE_ZERO_K);
                result = kelvinToCelsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = " << result << " °C" << endl;
                break;

            case 5: // Fahrenheit to Kelvin
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Fahrenheit", ABSOLUTE_ZERO_F);
                result = fahrenheitToKelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " K" << endl;
                break;

            case 6: // Kelvin to Fahrenheit
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                validateTemperatureInput(inputTemp, "Kelvin", ABSOLUTE_ZERO_K);
                result = kelvinToFahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = " << result << " °F" << endl;
                break;

            case 7: // Exit
                keepRunning = false;
                cout << "Thank you for using the Temperature Converter!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select a number between 1 and 7." << endl;
        }
    }

    return 0;
}

// Convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    if (celsius < ABSOLUTE_ZERO_C) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    return celsius - ABSOLUTE_ZERO_C;
}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    if (kelvin < ABSOLUTE_ZERO_K) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    return kelvin + ABSOLUTE_ZERO_C;
}

// Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    if (fahrenheit < ABSOLUTE_ZERO_F) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    // First convert to Celsius, then to Kelvin
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    if (kelvin < ABSOLUTE_ZERO_K) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    // First convert to Celsius, then to Fahrenheit
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

// Convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    if (celsius < ABSOLUTE_ZERO_C) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    return (celsius - ABSOLUTE_ZERO_C) * C_TO_F_FACTOR + ABSOLUTE_ZERO_F;
}

// Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    if (fahrenheit < ABSOLUTE_ZERO_F) {
        throw invalid_argument("Temperature cannot be below absolute zero.");
    }
    return (fahrenheit - ABSOLUTE_ZERO_F) * F_TO_C_FACTOR + ABSOLUTE_ZERO_C;
}

// input validation for temperature input
void validateTemperatureInput(double& temperature, const string& scaleName, double minimumTemperature) {
    while (cin.fail() || temperature < minimumTemperature) {
        if (cin.fail()) {
            cout << "Invalid input. Please enter a numeric value." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            cout << "Invalid temperature. " << scaleName
                 << " cannot be below " << minimumTemperature << "." << endl;
        }

        cout << "Please try again: ";
        cin >> temperature;
    }
}