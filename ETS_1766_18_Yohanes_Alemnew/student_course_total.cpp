/*1. Problem description
Write a C++ program that reads a student’s assignment, midterm and final marks (each out of 100). The course total is 20% assignment + 30% midterm + 50% final. The pass mark is 50. Print the total (one decimal place) and the word Pass or Fail. Use the conditional operator (no if).

2. Problem analysis
2.1 Input
-Assignment
-Midterm
-Final
2.2 Output
-Total 
-Pass or Fail

3. Process (operations)
-Declare variables for assignment, midterm, final, and total.
-Define the fixed values for assignment, midterm, and final.
-Read the inputs for assignment, midterm, and final.
-Calculate the total using the formula: total = (assignment * 0.2) + (midterm * 0.3) + (final * 0.5).
-Use the conditional operator to determine if the student has passed or failed based on the total.
-Print the total and the result.

4. Design the program
4.1 Variables Definition
      Variables         Type
      assignment        double
      midTerm           double
      final             double
      total             double
      passFail          string

4.2 Constant definition
    const double ASSIGNMENT_PERCENTAGE = 0.2;
    const double MIDTERM_PERCENTAGE = 0.3;
    const double FINAL_PERCENTAGE = 0.5;
    const double PASS_MARK = 50.0;

4.3 Reading input
    cout << "Enter assignment, midterm, and final marks (each out of 100) separated by spaces: ";
    cin >> assignment >> midTerm >> final;

4.4 Perform the operations 
-Calculate the total:
    total = (assignment * ASSIGNMENT_PERCENTAGE) + (midTerm * MIDTERM_PERCENTAGE) + (final * FINAL_PERCENTAGE);
-Determine pass or fail:
    passFail = (total >= PASS_MARK) ? "Pass" : "Fail";

4.5 Print the result
    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << passFail << endl;

5. Write the code*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// Step 4.1 and 4.2: declaration, initialization and constants
    const double ASSIGNMENT_PERCENTAGE = 0.2;
    const double MIDTERM_PERCENTAGE = 0.3;
    const double FINAL_PERCENTAGE = 0.5;
    const double PASS_MARK = 50.0;
    double assignment, midTerm, final, total;
    string passFail;

    // Step 4.3: read input
    cout << "Enter assignment, midterm, and final marks (each out of 100) separated by spaces: ";
    cin >> assignment >> midTerm >> final;

    // Step 4.4: perform the operations
    total = (assignment * ASSIGNMENT_PERCENTAGE) + (midTerm * MIDTERM_PERCENTAGE) + (final * FINAL_PERCENTAGE);
    passFail = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Step 4.5: print the result
    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << passFail << endl;

    return 0;
}