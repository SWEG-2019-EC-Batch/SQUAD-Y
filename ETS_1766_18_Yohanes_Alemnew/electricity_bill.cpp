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

5. Write the code*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// Step 4.1 and 4.2: declaration, initialization and constants
     const double SERVICE_CHARGE=10.0;
     int electricityUnits;
     double energyCharge, totalBill, extraCost;

// Step 4.3: read input
     cout<<"Enter the electricity units: ";
     cin>>electricityUnits;

// Step 4.4: perform the operations
     extraCost = electricityUnits-50;
     energyCharge = (electricityUnits<=50) ? electricityUnits*1.5 : 50*1.5+extraCost*2;
     totalBill = energyCharge+SERVICE_CHARGE;

// Step 4.5: print the result
     cout<<fixed<<setprecision(2);
     cout<<"Energy charge: "<<energyCharge<<endl;
     cout<<"Service charge: "<<SERVICE_CHARGE<<endl;
     cout<<"Total bill: "<<totalBill<<endl;

return 0;
}



