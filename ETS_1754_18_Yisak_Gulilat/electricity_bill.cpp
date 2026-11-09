/*
  (a) Inputs and outputs
      input  : units of electricity used in a month(kWh, whole number).
      outputs: energy charge, service charge, total bill(two decimals each).
  (b) Process
      1. Declare constants(first block = 50 units, rate for the first block = 1.50 birr, 
         rate above the block = 2.00 birr, service charge = 10.00 birr) and declare variables.
      2. Read the number of units.
      3. Compute the energy charge with the conditional operator:
         if units <= 50  -> units * 1.50
         otherwise       -> 50 * 1.50 + (units - 50) * 2.00
      4. Compute total bill = energy charge + service charge.
      5. Print the energy charge, the service charge and the total with two decimals.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // step 1. Constants and variables
    const int first_block_units= 50;
    const double first_block_rate= 1.50;
    const double above_block_rate= 2.00;
    const double service_charge= 10.00;
    int units;
    // step 2. read input
    cout << "Enter units used (kWh): ";
    cin >> units;
    // step 3. Compute the energy charge with the conditional operator
    double energyCharge = (units <= first_block_units)
        ? units * first_block_rate
        : first_block_units * first_block_rate
          + (units - first_block_units) * above_block_rate;
    double totalBill = energyCharge + service_charge;
    // step4. and step 5. Print the energy charge, the service charge and the total bill.
    cout << fixed << setprecision(2);
    cout << "Energy charge:  " << energyCharge << " birr" << endl;
    cout << "Service charge: " << service_charge << " birr" << endl;
    cout << "Total bill:     " << totalBill << " birr" << endl;
 
    return 0;
}
