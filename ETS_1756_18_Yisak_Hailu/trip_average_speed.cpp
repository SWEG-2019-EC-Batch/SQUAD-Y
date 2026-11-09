include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double distance;      // km
    int hours, minutes;   // travel time
    double consumption;   // liters per 100 km
    double price;         // birr per liter
 
    cout << "Enter trip distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> consumption;
    cout << "Enter price per liter (birr): ";
    cin >> price;
 
    double totalHours = hours + minutes / 60.0;
    if (totalHours <= 0) {
        cout << "Travel time must be greater than zero." << endl;
        return 1;
