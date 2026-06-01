#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function declaration for performComparison
bool performComparison(double a, string op, double b);

// Function to perform basic arithmetic operations
/* Please note that this comes before the main method
   We will see why when we cover functions */
double performOperation(double a, char op, double b) {
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
            case '^':
            return pow(a, b); //Exponentiation
        
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
    char choice; // Declare 'choice' at the beginning of the loop
    cout << "\nSelect operation type:" << endl;
cout << "1. Arithimetic (number operator number)" << endl;
cout << "2.Comparison(number operator number)" << endl;
cout <<  "3. Logical(true/false operator true/false)" << endl;
cout << "Enter your choice (1, 2, or 3):";
int operationType;
cin >> operationType;
if (operationType == 1) {
    double num1, num2;
    char op,choice;
    cout <<"\nEnter a simple expression(number operator number): ";
    cin  >> num1 >> op >>num2;
    double result = performOperation(num1, op, num2);
     cout<<"Result:" << num1 <<" "  << op << " " << num2 << " = "  << result << endl;
}
else if(operationType == 2) {
    double num1, num2;
    string op;
    char choice; // Declare the variable 'choice'
    cout <<"\nEnter a comparison expression (number operator number): " << endl;
     cout << "Available operator:==, !=, <, >, <=, >= " << endl ;
     cout <<"Expression: ";
     cin >> num1>> op >> num2;
bool result= performComparison(num1,op, num2 );
cout<< "Result:" << num1 << " " << op << " " << num2 << " = " << (result ? "true" : "false")
 << endl;
}
else if(operationType ==3) {
    cout <<"\nSelect logical operation:" <<endl;
    cout << "1. AND/OR(value operator value)"<<endl;
    cout << "2. NOT (not value)" <<endl;
    cout << "Enter choice (1 or 2): ";
    int logicChoise;
    cin >> logicChoise;
    

}

else {
    cout << "invalid choice!"<<endl;
} 
     cout <<"\nContinue with another calculation? (y/n) ";        
cin >> choice;
       continueCalculations = (choice == 'y' || choice == 'Y');
    }
    return 0;
}

// Function to preform relational operations
bool performComparison (double a, string op, double b) {
    if (op == "==") return a == b; // Equal to
    if (op == "!=") return a != b; // Not equal to
    if (op == "<") return a < b; // Less than
    if (op == ">") return a > b; // Greater than
    if (op == "<=") return a <= b; // Less than or equal to
    if (op == ">=") return a >= b; // Greater than or equal to
    cout << "Error: Unknown comparison operator!" << endl;
    return false;
}


// Function to preform logical operations
bool performLogicalOperation(bool a, string op,bool b) {
 if (op =="&&") return a && b; // Logical AND
 if(op == "||") return a || b; // Logical OR
 cout << "Error: Unknown logical operator!" << endl;
 return false;   
}
// Function to perform NOT logical operation
bool performLogicalNot(bool a) {
    return !a; // Logical NOT
}