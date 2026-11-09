
#include <iostream>
using namespace std;
int main() {
    int electricityUnits;
    double energycharge;
    cout << "Enter the number of electricity units consumed in a month (Kwh): ";
    cin >> electricityUnits;
    if (electricityUnits <= 50) {
        energycharge = electricityUnits * 1.5;
   
    } else {
        energycharge = electricityUnits * 2;
    }

    cout << "The energy charge for " << electricityUnits << " units is: " << energycharge << 'birr' << endl
