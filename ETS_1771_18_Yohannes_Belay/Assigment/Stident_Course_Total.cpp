#include <iostream> //  for the input and output
#include <iomanip> // for using setpercision 
using namespace std;

int main() {
    double assignment, midterm, finalExam, total; 
    string result;
    
 // inputs go in
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;
 // processes start here
    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    result = (total >= 50) ? "Pass" : "Fail"; // comparison
 // outputs go out 
    cout << fixed << setprecision(1);
    cout << "\nCourse Total: " << total << endl; 
    cout << "Result: " << result << endl;

    return 0;
}
