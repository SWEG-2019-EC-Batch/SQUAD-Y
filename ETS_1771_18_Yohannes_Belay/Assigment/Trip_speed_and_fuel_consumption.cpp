
#include <iostream> //  for the input and output
#include <iomanip> // for using setpercision 
using namespace std;

int main() {
    int Travel_hour, Travel_minutes; // whole number inputs
    double Distance , Fuel_consuption_rate, Price_per_liter, Total_time;//input variables
    double Average_Speed, Fuel_used,Fuel_cost; //  the outputs 

    // inputs go in
    cout << "Enter Distance :";
    cin >> Distance;
    cout << "Time in hours :";
    cin >> Travel_hour;
    cout << "Time in minutes :";
    cin >> Travel_minutes;
    cout << "Fuel consumption per 100km :";
    cin >> Fuel_consuption_rate;
    cout << "Price per liter :";
    cin >> Price_per_liter;
    
    //processor starts
    Total_time= Travel_hour +(Travel_minutes/60.0);
    Average_Speed= Distance/Total_time;
    Fuel_used= Distance*Fuel_consuption_rate/100;
    Fuel_cost=Fuel_used*Price_per_liter;

    // outputs get out
    cout << fixed << setprecision(2); 
    cout<< "\nAverage speed : "<<Average_Speed<<" km/h";
    cout<<"\nFuel Used : "<<Fuel_used<<" Liters";
    cout<<"\nFuel cost : "<<Fuel_cost<<" Birr";
    

    return 0;
}
