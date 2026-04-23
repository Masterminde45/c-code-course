#include <iostream>
using namespace std;
// This class performs a simple addition and prints the result
// along with a message based on the total.
class Calculator{
public:
int firstnumber, secondNumber;
// assign the values before performing the calculation.
void calculateandPrintResult(){
firstnumber =10;
 secondNumber
 =20;
 // Compute the total and display;
int totalResult = firstnumber + secondNumber;
// Print a message based on the result.
cout<<"result is "<< totalResult <<endl;
if(totalResult >25 ){
cout<<"big number"<<endl;
}
else {cout << "small number"<<endl;
}
}

};
int main(){
Calculator Calculator;
Calculator.calculateandPrintResult();
return 0;
}