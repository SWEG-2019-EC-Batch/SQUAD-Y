1. Problem description
Write a C++ program that reads the distance of a trip in km, the travel time as hours and minutes (whole numbers), the car’s fuel use in liters per 100 km and the price per liter (birr). Print the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each with two decimals.

2. Problem analysis
2.1 Input
 -Trip distance
 -Travel hours
 -Travel minutes
 -Fuel rate
 -Price per liter
 -Fuel per 100km
2.2 Output
 -Average speed
 -Fuel used
 -Fuel cost

3. Process (operations)
 -Declare variables.
 -Read the inputs.
 -Calculate the Fuel rate, Trave time, Average speed, Fuel used, and Fuel cost.
 -Print Average speed, Fuel used, and Fuel cost.

 4. Design the program
4.1 Variables Definition
      Variables                type
      tripDistance             int
      travelHours              int
      travelMinutes            int
      travelTime               double
      pricePerLiter            double
      fuelPer100km             double
      averageSpeed             double
      fuelUsed                 double
      fuelCost                 double

4.2 Reading input
cout<<"Enter Trip distance, Travel hours, Travel minutes, Fuel per 100km, Price per liter";
cin>>tripDistance>>travelHours>>travelMinutes>>travelTime>>pricePerLiter>>fuelPer100km;

4.4 Perform the operations 

