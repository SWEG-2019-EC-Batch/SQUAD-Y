// Fundamentals of Programming I (Individual Assignment 1)
/*
(a) Inputs : route number (1-6), age, student status (y/n),
              bag weight (kg), extra-weight rate per kg (birr)
     Outputs: route, base fare, discount, bag weight, extra charge, total fare

(b) Process:
   1. Show the route menu and read the route number.
   2. Use switch to set the route name and base fare (invalid route -> stop).
   3. Read age, student status, bag weight and rate per kg.
   4. Discount rates: child (age <= 12) 50%, elder (age >= 60) 25%, student 15%.
   5. Add all applicable rates together (discounts stack, e.g. child + student = 65%).
   6. discount = base fare * total rate.
   7. extra kg = weight > 20 ? weight - 20 : 0.
   8. extra charge = extra kg * rate per kg.
   9. total = base fare - discount + extra charge.
   10. Print the trip information.

(c) Program:                   */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
      // Constants
    const double INITIAL_WEIGHT   = 20.0;   // kg allowed free
    const double CHILD_RATE    = 0.50;   // age <= 12
    const double ELDER_RATE    = 0.25;   // age >= 60
    const double STUDENT_RATE  = 0.15;   // student
     // Variables
    short int    route, age;
    char   studentAnswer;
    float baseFare = 0.0, bagWeight, ratePerKg;
    string routeName;

      // Route menu
    cout << "===== BUS TICKET FARE SYSTEM =====" << endl;
    cout << "1. Addis Ababa - Adama" << endl;
    cout << "2. Addis Ababa - Fiche" << endl;
    cout << "3. Addis Ababa - Hawassa" << endl;
    cout << "4. Addis Ababa - Bahir Dar" << endl;
    cout << "5. Addis Ababa - Dire Dawa" << endl;
    cout << "6. Addis Ababa - Mekelle" << endl;
    cout << "Select route (1-6): ";
    cin >> route;

     // Base fare depends on the route
    switch (route)
    {
        case 1:
            routeName = "Addis Ababa - Adama";
            baseFare  = 150.0;
            break;
        case 2:
            routeName = "Addis Ababa - Fiche";
            baseFare  = 400.0;
            break;    
        case 3:
            routeName = "Addis Ababa - Hawassa";
            baseFare  = 450.0;
            break;
        case 4:
            routeName = "Addis Ababa - Bahir Dar";
            baseFare  = 900.0;
            break;
        case 5:
            routeName = "Addis Ababa - Dire Dawa";
            baseFare  = 1000.0;
            break;
        case 6:
            routeName = "Addis Ababa - Mekelle";
            baseFare  = 1300.0;
            break;
        default:
            cout << "Invalid route number. Program ended." << endl;
            return 0;
    }





