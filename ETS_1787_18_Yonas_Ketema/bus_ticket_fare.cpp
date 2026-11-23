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
