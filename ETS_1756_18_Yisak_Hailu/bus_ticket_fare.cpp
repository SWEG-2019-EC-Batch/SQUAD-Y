#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ---------- Settings (change as needed) ----------
const double FREE_LUGGAGE_KG   = 20.0;  // free luggage allowance
const double EXTRA_RATE_PER_KG = 10.0;  // birr per kg above allowance
const double STUDENT_DISCOUNT  = 0.15;  // 15% off base fare for students

// Returns base fare from Addis Ababa using switch; sets destination name
double getRouteFare(int choice, string &destination) {
    double fare = 0;
    switch (choice) {
        case 1: destination = "Moyale"; fare = 2000; break;
        case 2: destination = "Yabelo"; fare = 1600; break;
        case 3: destination = "Dila";   fare = 800;  break;
        case 4: destination = "Hawassa";fare = 600;  break;
        case 5: destination = "Adama";  fare = 300;  break;
        default: destination = "Invalid"; fare = -1; break;
    }
    return fare;
}

int main() {
    int trips;
    double grandTotal = 0;

    cout << "===== Bus Ticket System (From Addis Ababa) =====\n";
    cout << "How many trips do you want to book? ";
    cin >> trips;

    for (int i = 1; i <= trips; i++) {
        int choice;
        char studentAns;
        double luggage;
        string destination;

        cout << "\n--- Trip " << i << " ---\n";
        cout << "Destinations:\n"
             << " 1. Moyale  (2000 birr)\n"
             << " 2. Yabelo  (1600 birr)\n"
             << " 3. Dila    (800 birr)\n"
             << " 4. Hawassa (600 birr)\n"
             << " 5. Adama   (300 birr)\n";
        cout << "Choose destination (1-5): ";
        cin >> choice;

        double baseFare = getRouteFare(choice, destination);
        if (baseFare < 0) {
            cout << "Invalid choice. Trip skipped.\n";
            continue;
        }

        cout << "Are you a student? (y/n): ";
        cin >> studentAns;
        bool isStudent = (studentAns == 'y' || studentAns == 'Y');

        cout << "Luggage weight in kg: ";
        cin >> luggage;
        if (luggage < 0) luggage = 0;

        double discount = isStudent ? baseFare * STUDENT_DISCOUNT : 0;
        double extra = (luggage > FREE_LUGGAGE_KG)
                       ? (luggage - FREE_LUGGAGE_KG) * EXTRA_RATE_PER_KG : 0;
        double total = baseFare - discount + extra;
        grandTotal += total;

        cout << fixed << setprecision(2);
        cout << "\n----- Ticket " << i << " -----\n";
        cout << "Route          : Addis Ababa -> " << destination << "\n";
        cout << "Base fare      : " << baseFare << " birr\n";
        cout << "Student discount: -" << discount << " birr\n";
        cout << "Extra luggage  : +" << extra << " birr\n";
        cout << "Trip total     : " << total << " birr\n";
    }

    cout << "\n==============================\n";
    cout << "GRAND TOTAL: " << fixed << setprecision(2) << grandTotal << " birr\n";
    return 0;
}
