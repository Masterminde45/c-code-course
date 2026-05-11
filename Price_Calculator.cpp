#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
    // problem 1: Lost precision in financial calculation
    int dollars = 1000;
    double interestRate = 0.05; // 5%
   double interest = static_cast<double> (dollars) * interestRate; // Issue here!
    cout << fixed << setprecision(2);
   cout <<"Interest earned: $" << interest << endl;
   // Problem 2: Unexpected truncation
   double price = 19.99;
   int wholeDollars = static_cast<int>(price); // Issue here
   cout << "Price in whole dollars: $" << wholeDollars << endl;
   double lostCents = price - wholeDollars;
   cout << "Cents lost in conversion : $" << lostCents << endl;

   return 0;
}