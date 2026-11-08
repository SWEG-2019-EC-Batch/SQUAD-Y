/*
  (a) inputs and outputs
      inputs : distance (km), travel time as hours and minutes (whole numbers),
               fuel use (liters per 100 km), price per liter (birr)
      outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
               each with two decimals
  (b) Process
      1. Declare constants: minutes per hour = 60, distance basis for fuel use = 100 km. and declare variables.
      2. Read the distance, hours, minutes, fuel use per 100 km and price per liter.
      3. Convert the travel time to hours: totalHours = hours + minutes / 60
         (cast minutes to double so the division keeps its decimals).
      4. Average speed = distance / totalHours.
      5. Fuel used = distance * (liters per 100 km) / 100.
      6. Fuel cost = fuel used * price per liter.
      7. Print the speed, fuel used and fuel cost with two decimals.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // step 1. Constants and variables
    const int MINUTES_PER_HOUR= 60;
    const double FUEL_BASIS_KM= 100.0;
    double distance, fuelPer100km, pricePerLiter;
    int hours, minutes;
    // step 2. read input
    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100km;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;
    // step 3, step 4, step 5, and step 6. Convert the travel time to hours, average speed, calculate fuel, used and fuel cost.
    double totalHours = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;
    double averageSpeed = distance / totalHours;
    double fuelUsed = distance * fuelPer100km / FUEL_BASIS_KM;
    double fuelCost = fuelUsed * pricePerLiter;
    // step 7. print the result.
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used:     " << fuelUsed << " liters" << endl;
    cout << "Fuel cost:     " << fuelCost << " birr" << endl;
 
    return 0;
}
