/*1. Problem description
Write a C++ program that reads the distance of a trip in km, the travel time as hours and minutes (whole numbers), the car’s fuel use in liters per 100 km and the price per liter (birr). Print the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each with two decimals.

2. Problem analysis
2.1 Input
 -Distance (km)
 -Travel hours
 -Travel minutes
 -Fuel use (liters per 100km)
 -Price per liter ( birr)
 
2.2 Output
 -Average speed (km/h)
 -Fuel used (lirers)
 -Fuel cost ( birr)
Constants :
 -Minutes per hour
 -Fuel base distance (100km)

3. Process (operations)
 -Declare variables.
 -Define the fixed values.
 -Read the inputs.
 -Convert the travel time to hours.
 -Calculate the Fuel rate, Trave time, Average speed, Fuel used, and Fuel cost.
 -Print Average speed, Fuel used, and Fuel cost.

 4. Design the program
4.1 Variables Definition
      
      Variables                type  
      travelHours              int
      travelMinutes            int
      travelTime               double
      Distance                 double
      pricePerLiter            double
      fuelPer100km             double
      averageSpeed             double
      fuelUsed                 double
      fuelCost                 double
4.2 Constant definition
    const double Minutes_Per_Hour = 60.0;
    const double Fuel_Base_KM = 100.0;

4.3 Reading input
    cout<<"Enter distance, Travel hours, Travel minutes, Fuel per 100km, Price per liter";
    cin>>Distance>>travelHours>>travelMinutes>>travelTime>>pricePerLiter>>fuelPer100km;

4.3 Perform operation
    -Cnvert the time to hours:
       totalHours = hours + (minutes / Minutes_Per_Hour);
    -Calculate the average speed:
       averageSpeed = distance / totalHours;
    -Calculate the fuel used:
       fuelUsed = (distance / Fuel_Base_KM) * fuelper100;
    -CAlculate the fuel cost:
       fuelCost = fuelUsed * priceperliter;

4.4 Print the result
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << "km/h" << endl;
    cout << "Fuel used: " << fuelUsed << "liters" << endl;
    cout << "Fuel cost: " << fuelCost << "birr" << endl; 

4.5 C++ program */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double Minutes_Per_Hour = 60.0;
  const double Fuel_Base_KM = 100.0;

  double distance, fuelper100, priceperliter;
  int hours, minutes;

  cout << " Enter distance (km): ";
  cin >> distance;
  cout << " Enetr travel time - hours: ";
  cin >> hours;
  cout << " Enter travel time - minutes: ";
  cin >> minutes;
  cout << " Enter fuel use (liters per 100 km: ";
  cin >> fuelper100;
  cout << "Enter price per liter (birr): ";
  cin >> priceperliter;

  double tatalHours = hours + minutes / Minutes_Per_Hour;
  double averageSpeed = distance / totalHours;
  double fuelUsed = distance / Fuel_Base_KM * fuelper100;
  double fuelCost = fuelUsed * priceperliter;




