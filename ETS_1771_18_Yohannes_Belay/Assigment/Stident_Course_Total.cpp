#include <iostream> //  for the input and output
#include <iomanip> // for using setpercision 
using namespace std;

int main() {
    double assignment, midterm, finalExam, total; // inputs
    string result;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50); // for the process

    result = (total >= 50) ? "Pass" : "Fail"; // comparison

    cout << fixed << setprecision(1);
    cout << "\nCourse Total: " << total << endl; //outputs
    cout << "Result: " << result << endl;

    return 0;
}
