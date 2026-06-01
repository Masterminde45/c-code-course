#include <iostream>
#include <string>
using namespace std;
// Function to perform basic arithmetic operations
/* Please note that this comes before the main method
   We will see why when we cover functions */
double preformOperation(double a, char op, double b) {
    switch (op) {
        case '+': return a + b; // Addition
        case '-': return a - b; // Subtraction
        case '*': return a * b; // Multiplication
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        case '%':
            if (b != 0) {
                return static_cast<int>(a) % static_cast<int>(b);
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        default:
            cout << "Error: Unknown operator!" << endl;
            return 0;
    }
}

int main() {
    // Display welcome message
    cout << "=======================================" << endl;
    cout << " MATHEMATICAL EXPRESSION EVALUATOR " << endl;
    cout << "=======================================" << endl;
    cout << "This program evaluates mathematical expressions" << endl;
    cout << "using various operators and precedence rules." << endl << endl;

bool continueCalculations =true;
while (continueCalculations) {
    double num1, num2;
    char op,choice;
    cout <<"\nEnter a simple expression(number operator number): ";
    cin  >> num1 >> op >>num2;
    double result = preformOperation(num1, op, num2);
     cout<<"Result:" << num1 <<" "  << op << " " << num2 << " = "  << result << endl;
     cout <<"\nContiniuewith anothercalculation? (y/n) ";
       cin >> choice;
       continueCalculations = (choice == 'y' || choice == 'y');
    }
    return 0;
}


