/*1. Problem description
Write a C++ program that reads the electricity units (kWh, a whole number) used in a month. The first 50 units cost 1.50 birr each and every unit above 50 costs 2.00 birr. A fixed service charge of 10 birr is added. Print the energy charge, the service charge and the total bill (two decimals). Use the conditional operator (no if).

2. Problem analysis
2.1 Input
-Electricity units
2.2 Output
-Energy charge
-Service charge
-Total bill

3. Process (operations)
-Declare variables for electricity units, energy charge, service charge, and total bill.
-Read the input for electricity units.
-Calculate the energy charge and total bill.
-Print the energy charge, service charge, and total bill.

4. Design the program
4.1 Variables Definition
       Variables             Type
       elctricityUnits       int
       energyCharge          double
       totalBill             double
       extraCost             double

4.2 Constant definition
const double SERVICE_CHARGE=10.0;

4.3 Reading input
cout<<"Enter the electricity units: ";
cin>> electricityUnits;

4.4 Perform the operations 
-Calculations:
  extraCost = electricityUnits-50;
  energyCharge = (electricityUnits<=50) ? electricityUnits*1.5 : 50*1.5+extraCost*2;
  totalBill = energyCharge+SERVICE_CHARGE;

4.5 Print the result
  cout<<fixed<<setpricion(2);
  cout<<"Energy change: "<<energyChange<<endl;
  cout<<"Service charge: "<<SERVICE_CHARGE<<end;
  cout<<"Total bill: "<<totalBill<endl;
5 C++ code */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int TIER_LIMIT = 50;
  const double RATE_INITIAL = 1.50;
  const double RATE_ABOVE = 2.00;
  const double SERVICE_CHANGE = 10.00;
  
  int units ;
  cout << "Enter electricity units used (kwh): ";
  cin >> units ;

  int initialunits = (units > TIER_LIMIT) ? TIER_LIMIT : units;
  int extraunits = (units > TIER_LIMIT) ? (units - TIER_LIMIT) : 0;

  double energycharge = initialunits * RATE_INITIAL + extraunits * RATE_ABOVE;
  double totalbill = energycharge + SERVICE_CHARGE;

  cout << fixed << setprecision(2);
  cout << "Energy charge: " << energycharge << "birr" << endl;
  cout << "Service charge: " << SERVICE_CHARGE << "birr" << endl;
  cout << "Total bill: " << totalbill << "birr" << endl;

  return 0;

}
 
 
  

